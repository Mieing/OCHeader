@interface WAWidgetLocalSearchUtil : NSObject

+ (long long)currentPrividerForWidgetData:(id)a0;
+ (id)relayInfoForWidgetItem:(id)a0;
+ (id)provderInfoForWidgetItem:(id)a0;
+ (unsigned long long)serviceTypeForWidgetItem:(id)a0;
+ (id)currentItemForWidgetData:(id)a0;
+ (id)footerForWidgetData:(id)a0;
+ (id)srcAppidForRelayInfo:(id)a0;
+ (unsigned int)openAppPermissionForRelayInfo:(id)a0;
+ (unsigned int)debugModeForRelayInfo:(id)a0;
+ (id)statBufferForRelayInfo:(id)a0;
+ (void)reportOpenAppErrorForPermission:(id)a0 url:(id)a1;
+ (BOOL)isLeftRightSwitchType;
+ (BOOL)isMoreBtnSwitchType;
+ (void)reportJumpAction:(unsigned long long)a0 searchId:(id)a1 sessionId:(id)a2 query:(id)a3 path:(id)a4 weappUsrname:(id)a5 serviceType:(unsigned int)a6;

@end
