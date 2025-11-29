@class UIViewController, NSString, NSDictionary, AWEFileDownloader, AWEEnterpriseConnectionMessageHandler, AWEFeatureCenter;

@interface AWEEnterpriseServiceModuleService : HTSService <AWEEnterpriseServiceModuleService>

@property (retain, nonatomic) AWEFeatureCenter *featureCenter;
@property (retain, nonatomic) AWEFileDownloader *fileDownloader;
@property (retain, nonatomic) NSDictionary *screenshotDict;
@property (nonatomic) BOOL shouldShowScreenshotAlert;
@property (weak, nonatomic) UIViewController *currentMonitorScreenshotVC;
@property (retain, nonatomic) AWEEnterpriseConnectionMessageHandler *msgHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleProfileExtensionAreaActionWithType:(unsigned long long)a0 userModel:(id)a1 schema:(id)a2;
+ (BOOL)shouldRegisterSmartphoneLongConnectionWithModel:(id)a0;
+ (BOOL)shouldShowCallEvaluationBottomViewWithUserModel:(id)a0;
+ (id)callEvaluationBottomViewWithUserModel:(id)a0;
+ (void)recordCallEvaluationContent:(id)a0;
+ (void)notifyCallEvaluationBottomViewShowWithUserModel:(id)a0;

- (Class)profileExtensionAreaCardControllerClass;
- (id)profileTabFeatureWithContext:(id)a0;
- (id)userInfoFeatureWithUser:(id)a0;
- (id)currentUserInfoFeature;
- (BOOL)storageBoolValueInDiffUserWithKey:(id)a0;
- (void)setStorageBoolValueInDiffUserWithValue:(BOOL)a0 key:(id)a1;
- (void)enterTabSettingsEditPage;
- (void)enterBrandNameSettingsEditPage;
- (void)enterIMSendCompanyComponentPage:(id)a0;
- (id)hitIMCompanyToolDomainUrlToGetKey:(id)a0;
- (void)requestJoinImGroupPreDataWithParams:(id)a0 trackParams:(id)a1 completion:(id /* block */)a2;
- (void)requestJoinIMGroupWithParams:(id)a0 completion:(id /* block */)a1;
- (id)customerServiceMessageViewModelWithType:(long long)a0;
- (struct CGSize { double x0; double x1; })transferMessageAttributeStringWithMessageInfo:(id)a0 syncExt:(id)a1 localExt:(id)a2 type:(long long)a3;
- (void)transferToMessageFloatPageWithItemId:(id)a0 SecUid:(id)a1 fromVC:(id)a2 params:(id)a3 completion:(id /* block */)a4;
- (void)downloadWithParams:(id)a0 completion:(id /* block */)a1;
- (void)monitorScreenshotWithParams:(id)a0;
- (id)addTimestampToSchema:(id)a0 inScene:(id)a1;
- (id)addParams:(id)a0 withTargetString:(id)a1;
- (BOOL)shouldSchemaJoinParamsInScene:(unsigned long long)a0;
- (BOOL)makeHybridSmartCallWithParams:(id)a0;
- (BOOL)makeHybridSmartCall:(id)a0 needSkipNumberSheet:(BOOL)a1;
- (Class)profileExtensionAreaCardControllerClassV2;
- (void)showInterceptDialogWithTitle:(id)a0 content:(id)a1 completion:(id /* block */)a2;
- (BOOL)isEnterpriseRelatedUser:(id)a0;
- (unsigned long long)roleTypeWithUserModel:(id)a0;
- (void)preRenderWithURLString:(id)a0 scene:(id)a1;
- (id)fetchPreRenderWebViewControllerWithURL:(id)a0;
- (BOOL)removePreRenderWithURLString:(id)a0;
- (BOOL)releasePreRenderWithURLString:(id)a0;
- (id)companyMenuWithContext:(id)a0;
- (id)companyNameEditWithContext:(id)a0;
- (id)headPictureEditFeature;
- (id)customerServiceMessageViewWithType:(long long)a0;
- (id)webviewFeatureWithURL:(id)a0;
- (void)handlePushReceivingMessage:(id)a0;
- (void)userDidTakeScreenshot:(id)a0;
- (void)showInterceptDialogWithTitle:(id)a0 content:(id)a1 actionTitle:(id)a2 completion:(id /* block */)a3;
- (id)mergeEnterpriseTabExtraWithNewDict:(id)a0 oldDict:(id)a1;
- (id)removeQueryFromSchema:(id)a0;
- (void)p_enterChatTrackMethodWithUid:(id)a0 conId:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
