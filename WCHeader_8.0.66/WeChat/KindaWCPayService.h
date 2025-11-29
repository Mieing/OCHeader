@class WCPayAddPayCardLogic, NSString, WCPayJSApiVerifyPayPasswordControlLogic, MMVoidITransmitKvDataCallback, MMITransmitKvData, MMVoidITransmitKvDataNoticeItemCallback, WCPayOfflinePayMainLogic;

@interface KindaWCPayService : NSObject <WCPayOfflineLogicDelegate, WCPayWalletLockSettingLogicDelegate, WCPayWalletLockVerifyLogicDelegate, WCPayJSApiVerifyDelegate, WCPayAddPayCardDelegate, WCPayLogicMgrExt, MMKWCPayService> {
    WCPayAddPayCardLogic *mAddPayCardLogic;
    WCPayOfflinePayMainLogic *mOfflinePayMainLogic;
    WCPayJSApiVerifyPayPasswordControlLogic *mVerifyPayPasswordLogic;
    MMVoidITransmitKvDataCallback *mQuitCallback;
    MMITransmitKvData *mData;
}

@property (retain, nonatomic) MMVoidITransmitKvDataNoticeItemCallback *bannerDataCallback;
@property (retain, nonatomic) MMVoidITransmitKvDataCallback *getCardListCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getFiltedTruthName:(id)a0;
- (void)getCardListAndUsrVerifiedInfoImpl:(id)a0;
- (void)OnGetBindQueryInfo:(id)a0 Error:(id)a1;
- (id)convertUserInfoData:(id)a0;
- (id)genPayControlData;
- (void)initOfflinePayMainLogic:(id)a0;
- (void)initJSApiVerifyPayPasswordControlLogic:(id)a0;
- (void)initAddPayCardLogic:(id)a0;
- (void)startUseCaseImpl:(id)a0 data:(id)a1 quitCallback:(id)a2;
- (void)getBannerInfoImpl:(int)a0 callback:(id)a1;
- (BOOL)isNeedWalletLock;
- (BOOL)isSetWalletLock;
- (id)getFreezeBalanceMsg;
- (void)clearFreezeBalanceMsg;
- (BOOL)isBalanceMasked;
- (void)setBalanceMasked:(BOOL)a0;
- (void)checkWalletLockOpenStatusImpl:(id)a0;
- (void)openHongbaoSelectExclusiveMemberPageImpl:(id)a0 confirm:(id)a1;
- (void)openTransferToPhoneLiteapp;
- (void)onOfflinePayLogicStop:(BOOL)a0;
- (void)walletLockDidClose:(id)a0;
- (void)touchLockDidSetup:(id)a0;
- (void)patternLockDidSetup:(id)a0;
- (void)callPaySecurityRefresh;
- (void)walletLockVerifySuccess:(id)a0;
- (BOOL)walletLockVerifyLogicNeedBlock:(id)a0;
- (void)onVerifyResult:(id)a0;
- (id)getParam;
- (id)getCurrentURL;
- (id)getParams;
- (void)onAddPayCardResult:(BOOL)a0;
- (void)openHongbaoDetailUIPageImpl:(id)a0 quitCallback:(id)a1;
- (void)refreshHongbaoDetailUIPage:(id)a0;
- (void).cxx_destruct;

@end
