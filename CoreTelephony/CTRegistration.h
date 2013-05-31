/*
 * CoreTelephony registration system support.
 */

#ifndef _CTRegistration_H_
#define _CTRegistration_H_

#include "CoreHeaders.h"

__BEGIN_DECLS

#pragma mark - API

/* For use with the CoreTelephony notification system. */
CFStringRef kCTRegistrationStatusChangedNotification;
CFStringRef kCTRegistrationStateDurationReportNotification;
CFStringRef kCTRegistrationServiceProviderNameChangedNotification;
CFStringRef kCTRegistrationOperatorNameChangedNotification;
CFStringRef kCTRegistrationNewServingNetworkNotification;
CFStringRef kCTRegistrationDataStatusChangedNotification;
CFStringRef kCTRegistrationDataActivateFailedNotification;
CFStringRef kCTRegistrationCellularDataPlanHideIndicatorNotification;
CFStringRef kCTRegistrationCellularDataPlanActivateFailedNotification;
CFStringRef kCTRegistrationCustomerServiceProfileUpdateNotification;
CFStringRef kCTRegistrationCellChangedNotification;
CFStringRef kCTRegistrationCauseCodeNotification;

/* Service types. */
CFStringRef kCTDataConnectionServiceType3GFaceTimeAuthentication;
CFStringRef kCTDataConnectionServiceType3GFaceTimeTraffic;
CFStringRef kCTDataConnectionServiceTypeAppleWirelessDiagnostics;
CFStringRef kCTDataConnectionServiceTypeCellularDataPlanProvisioning;
CFStringRef kCTDataConnectionServiceTypeDataTest;
CFStringRef kCTDataConnectionServiceTypeEntitlementTraffic;
CFStringRef kCTDataConnectionServiceTypeInternalDataProbe;
CFStringRef kCTDataConnectionServiceTypeInternet;
CFStringRef kCTDataConnectionServiceTypeMMS;
CFStringRef kCTDataConnectionServiceTypeOMADM;
CFStringRef kCTDataConnectionServiceTypeOTAActivation;
CFStringRef kCTDataConnectionServiceTypeOTAInternet;
CFStringRef kCTDataConnectionServiceTypePushEmail;
CFStringRef kCTDataConnectionServiceTypeVVM;
CFStringRef kCTDataConnectionServiceTypeWirelessModemAuthentication;
CFStringRef kCTDataConnectionServiceTypeWirelessModemTraffic;
CFStringRef kCTDataConnectionServiceTypeZeroRated;

/*
 * Use 0 for __unknown0.
 * It is actually a pointer to a struct that is used as the return value but you can just use 0.
 */

void CTRegistrationDataCounterGetAllStatistics(int __unknown0, float *bytesSent, float *bytesReceived);
void CTRegistrationDataCounterGetAllStatisticsForServiceType(int __unknown0, float *bytesSent, float *bytesReceived, CFStringRef serviceType);

__END_DECLS

#endif /* _CTRegistration_H_ */
