@class MMLoadingView, NSString, MMUIViewController, NSArray, WAAppOpenParameter, NSDictionary;

@interface BizTlOpenPublish : MMUserService <BizTlPersonalCenterMgrRegisterExt, MMServiceProtocol>

@property (retain, nonatomic) MMLoadingView *loadingView;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) WAAppOpenParameter *openParameter;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (copy, nonatomic) id /* block */ publishResult;
@property (retain, nonatomic) NSString *draftScene;
@property (nonatomic) unsigned int draftType;
@property (retain, nonatomic) NSArray *photoList;
@property (retain, nonatomic) NSDictionary *nativeExtraDataFromOutside;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePersonalCenterJumpPhotoInfoWithImage:(id)a0;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)openPublishWithImage:(unsigned int)a0 publishScene:(id)a1 openParameter:(id)a2 viewController:(id)a3 photoList:(id)a4 nativeExtraData:(id)a5 publishResult:(id /* block */)a6;
- (void)openPublishWithParam:(id)a0 viewController:(id)a1 photoList:(id)a2 publishResult:(id /* block */)a3;
- (void)openPublish:(id)a0 viewController:(id)a1 publishResult:(id /* block */)a2;
- (void)openPublishWithParam:(id)a0 viewController:(id)a1 publishResult:(id /* block */)a2;
- (void)dealPublishResult:(id /* block */)a0;
- (id)pathOfBizCache;
- (void)parseData:(id)a0;
- (void)parseDic:(id)a0;
- (id)generateOpenInfo;
- (void)dealNativeExtraData;
- (void)invokeCallBack:(BOOL)a0 errMsg:(id)a1 dic:(id)a2;
- (void)cleanStatus;
- (void)startLoading;
- (void)stopLoading;
- (void)onGetBizFailed;
- (void)onGetBiz:(id)a0 initFlag:(BOOL)a1 banType:(unsigned int)a2;
- (void)openPublishImageSelectPage;
- (BOOL)checkUseDraft;
- (void)openPersonalCenterMiniAppPage;
- (id)makeHandlerWrapper;
- (void)onSelectPhotoFailed;
- (void)onOpenRegisterPage;
- (void)onOpenRegisterCanceled;
- (void)onStartLoadingView;
- (void)onStopLoadingView;
- (void).cxx_destruct;

@end
