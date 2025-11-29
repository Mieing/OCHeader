@interface AWENoWifiAlertHelper : NSObject

+ (id)sharedInstance;

- (BOOL)shouldNotShowNoWifiAlertUseNewStrategy;
- (id)freeFlowCardURL;
- (id)telecomCarrier;
- (void)trackEventNoWifiByteFreeWithPageStyle:(id)a0 referString:(id)a1;
- (void)trackEventNoWifiCancelWithPageStyle:(id)a0 referString:(id)a1;
- (void)trackEventNoWifiContinueWithPageStyle:(id)a0 referString:(id)a1;
- (void)trackEventEnterPhoneCardApply:(id)a0;
- (void)trackEventByteFree:(id)a0;
- (void)trackEventWifiByteFree:(id)a0;
- (void)trackEventWifiContinue:(id)a0;
- (void)trackEventWifiAlert:(id)a0;
- (void)trackEventNoWifiAlertWithPageStyle:(id)a0 referString:(id)a1;

@end
