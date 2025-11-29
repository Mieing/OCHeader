@class MultiDeviceLoginInfo, MultiDeviceLoginConfirmInfo, NSString;
@protocol MultiDeviceLoginLogicDelegate;

@interface MultiDeviceLoginLogic : NSObject <MMWebViewDelegate>

@property (retain, nonatomic) MultiDeviceLoginInfo *info;
@property (retain, nonatomic) MultiDeviceLoginConfirmInfo *confirmInfo;
@property (nonatomic) BOOL showingVerifyWebView;
@property (weak, nonatomic) id<MultiDeviceLoginLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelLoginWithLoginUrlStr:(id)a0;

- (id)initWithLoginInfo:(id)a0;
- (void)jumpToUsageURL;
- (void)cancelLogin;
- (void)confirmLoginWithInfo:(id)a0;
- (void)privateConfirmLoginWithInfo:(id)a0;
- (BOOL)needShowMultiDeviceGuide;
- (void)markMultiDeviceGuideShown;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)webViewDidReturn:(id)a0;
- (void).cxx_destruct;

@end
