@class WAContactGetter, NSString, MMUINavigationController, OpenApiParameter, MMAsset;

@interface OpenBusinessViewHandler : MMObject <IPreEnterWechatLogicExt, IWCBusinessJumpExt, PBMessageObserverDelegate, WCFinderPostViewControllerDelegate, WCFinderLongVideoChooseHelperDelegate>

@property (retain, nonatomic) OpenApiParameter *parameter;
@property (retain, nonatomic) WAContactGetter *contactGetter;
@property (nonatomic) BOOL isBizCompleted;
@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (nonatomic) BOOL dismissModalByBiz;
@property (retain, nonatomic) MMAsset *finderAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned int)genExtKey;
+ (BOOL)isNativeBusinessType:(id)a0;
+ (void)navigateBackTo3rdApp:(id)a0 universalLink:(id)a1 businessType:(id)a2 errCode:(int)a3 errMsg:(id)a4 extMsg:(id)a5 appSupportParseUrlParamsType:(unsigned int)a6;
+ (id)jsonStringWithDict:(id)a0;

- (void)dealloc;
- (BOOL)startHandle:(id)a0;
- (void)clearAllHandle;
- (void)checkOpenBusinessView;
- (void)checkOpenNativeView;
- (void)checkOpenNonNativeBusinessView;
- (void)onPreEnterWechatDone;
- (void)processTranslateResult:(id)a0 parentController:(id)a1 originUrl:(id)a2 translateInfo:(id)a3 jumpController:(id)a4;
- (void)enterFinderGamePostProcessWithJumpController:(id)a0 prepareLogic:(id)a1 needDismissJumpVC:(BOOL)a2 appId:(id)a3 ticket:(id)a4 scene:(unsigned int)a5;
- (void)enterFinderPostProcessWithJumpController:(id)a0 businessType:(id)a1 dictTranslateInfo:(id)a2;
- (id)getTmpFilePathWithMP4Ext;
- (void)presentFinderpostViewControllerWithPostSession:(id)a0 presentAnimated:(BOOL)a1;
- (void)showFinderFailErrWithIumpController:(id)a0 toastMsg:(id)a1 errCode:(unsigned int)a2 errMsg:(id)a3 appID:(id)a4 universalLink:(id)a5 businessType:(id)a6;
- (BOOL)requestForOpenLiteApp:(id)a0 appId:(id)a1 context:(id)a2;
- (BOOL)requestForLaunchBusinessWxa:(id)a0 appId:(id)a1 context:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleOpenLiteAppResponse:(id)a0;
- (void)handleLaunchBusinessWxaResponse:(id)a0;
- (void)didGetLiteAppVC:(id)a0 openInfo:(id)a1 context:(id)a2;
- (void)doOpenWeAppWithResponse:(id)a0 contact:(id)a1 context:(id)a2;
- (void)getLocalOpenId:(id *)a0 thirdAppOpenId:(id *)a1;
- (BOOL)postViewControllerGiveUpByBusiness;
- (void)postViewControllerFromVC:(id)a0 postSession:(id)a1;
- (void)handleNativeOpenAdCanvas:(id)a0;
- (void)handleNativeOpenWxSearchWithAppID:(id)a0 queryInfo:(id)a1 extInfo:(id)a2 jumpViewController:(id)a3;
- (void)longVideoChooseHelper:(id)a0 postSession:(id)a1;
- (void).cxx_destruct;

@end
