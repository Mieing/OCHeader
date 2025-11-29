@class NSString, UPWebController, NSTimer, UPNetworkOperation, UPPreTableCell;

@interface UPPaymentControl : NSObject <UPWebPayDelegate> {
    UPPreTableCell *_codecUtil;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) BOOL configHandled;
@property (copy, nonatomic) id /* block */ nextBlock;
@property (weak, nonatomic) UPWebController *wcdWebVC;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) NSTimer *directAppTimer;
@property (retain, nonatomic) UPNetworkOperation *directAppMerchantOperation;
@property (retain, nonatomic) UPNetworkOperation *directAppDefaultOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultControl;

- (void)getDirctAppTimeOut:(id)a0;
- (BOOL)onSDKPay:(id)a0;
- (void)onWebPayResult:(id)a0;
- (void)onPayCancel:(id)a0;
- (BOOL)startPay:(id)a0 fromScheme:(id)a1 mode:(id)a2 viewController:(id)a3;
- (void)handleBankAppResult:(id)a0 wcdWebVC:(id)a1;
- (BOOL)isHandleBankPayResult;
- (void)handlePaymentResult:(id)a0 completeBlock:(id /* block */)a1;
- (BOOL)isPaymentAppInstalled:(id)a0 withMerchantInfo:(id)a1;
- (void)getDirectApps:(id)a0 withMerchantInfo:(id)a1 succBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (id)getAppScanLocalConfig;
- (void)getAppScanRemoteConfig:(id)a0 wihtMerchantInfo:(id)a1;
- (void)regetAppScanRemoteConfigWithMode:(id)a0;
- (void)handleScanConfigResult:(id)a0 withMode:(id)a1;
- (void)clearPreGetDirectApp;
- (id)getDirectAppsFrom:(id)a0;
- (id)getDirectAppLocalConfig;
- (void)getDirectAppRemoteConfig:(id)a0 wihtMerchantInfo:(id)a1 succBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)regetDirectAppRemoteConfigWithMode:(id)a0 succBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void)getDirectAppInnerErrorWithFailBlock:(id /* block */)a0;
- (void)handleDirectAppConfigResult:(id)a0 withMode:(id)a1 succBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)sendCallingAppWithSchema:(id)a0 universalLink:(id)a1;
- (id)AdsSDlNGlCPeVcMb;
- (void)FjLwqpwsSxGFVXEu;
- (void)GSCtxGmJSizWGHNC:(id)a0;
- (void)startAppWithUniversalLink:(id)a0 schema:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)XHjpSncjkQDgjBif:(id)a0;
- (void)dUTJFHkhlePSYsBI:(id)a0;
- (void)eSDNMt35ls8eCNDu:(id)a0;
- (void)cDXING3SZSdsyerh:(id)a0;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
