@class MMLimitedModeAuthorizationUtilLogic, NSString, MMWebLimitedModeUrlData;

@interface MMWebViewPlugin_LimitedMode : MMWebViewPluginBase <MMLimitedModeAuthorizationUtilLogicDelegate>

@property (retain, nonatomic) MMWebLimitedModeUrlData *outlinkBlockedInitUrlData;
@property (nonatomic) unsigned long long lastRequestActionTime;
@property (retain, nonatomic) MMLimitedModeAuthorizationUtilLogic *requestAuthLogic;
@property (retain, nonatomic) MMWebLimitedModeUrlData *requestUrlData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOutlinkUrlTemporaryAuthorizationWithUrl:(id)a0;
+ (BOOL)isBrandUrlTemporaryAuthorizationWithUrl:(id)a0;
+ (BOOL)isLimitedModeOn;
+ (BOOL)isOutlinkTypeLimited;
+ (BOOL)isBrandTypeLimited;
+ (BOOL)isBrandTypeUrl:(id)a0;
+ (BOOL)isAcceptOutlinkUrl:(id)a0;
+ (BOOL)isAcceptBrandUrl:(id)a0;
+ (id)outlinkKeyWithUrl:(id)a0;
+ (id)brandKeyWithUrl:(id)a0;
+ (BOOL)checkAccessAuthorizationHadApproveWithBizKey:(id)a0 bizType:(long long)a1;

- (BOOL)handleEvent:(unsigned long long)a0 userInfo:(id)a1 retInfo:(id)a2;
- (id)getOutlinkInitUrl;
- (BOOL)canGetTemporaryAuthorizationInfos:(id)a0 errDesc:(id *)a1;
- (id)getTemporaryAurhorizationInfos;
- (BOOL)requestTemporaryAurhorizationWithUrlData:(id)a0 type:(id)a1 errDesc:(id *)a2;
- (void)updateoutlinkBlockedInitUrlData;
- (BOOL)hasOutlinkBlockedInitUrlData;
- (void)didCutomerPageVerifySuccess;
- (void)didCutomerPageClose;
- (void)tryPopCurrentWebViewAndPushExtraWebView:(id)a0;
- (void).cxx_destruct;

@end
