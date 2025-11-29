@class WCPayUserInfo, DelaySwitchSettingLogic, MMVoidITransmitKvDataCallback, NSString;

@interface KindaPaySettingsService : NSObject <WCPayOpenTouchIDAuthLogicDelegate, MMKPaySettingsService>

@property (retain, nonatomic) DelaySwitchSettingLogic *delaySetting;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *bioPayResultCallback;
@property (retain, nonatomic) WCPayUserInfo *payUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getTransferDelayType;
- (void)setTransferDelayType:(long long)a0;
- (void)commitTransferDelayTypeChange;
- (int)getTransferPhoneGrantFlag;
- (void)setTransferPhoneGrantFlag:(int)a0;
- (BOOL)getReddotStatus:(id)a0;
- (void)markReddotConsumed:(id)a0;
- (long long)getHbRefundWayType;
- (void)setHbRefundWayType:(long long)a0;
- (void)commitHbRefundWayTypeChange;
- (id)supportedBioPayTypes;
- (BOOL)isBioPayTypeEnabled:(long long)a0;
- (void)handlePushBioPaySettingPageImpl:(id)a0;
- (void)setBioPayTypeEnabledImpl:(long long)a0 enabled:(BOOL)a1 data:(id)a2 resultCallback:(id)a3;
- (void)logGeneralUserAction:(int)a0;
- (void)onWCPayOpenTouchIDAuthLogicOpenSuccess;
- (void)onWCPayOpenTouchIDAuthLogicOpenFailed:(id)a0;
- (void)onWCPayCloseTouchIDFailed;
- (void)onWCPayCloseTouchIDSuccess;
- (id)getUnexpiredXMLReddot:(id)a0;
- (void)markXMLReddotConsumed:(id)a0;
- (void).cxx_destruct;

@end
