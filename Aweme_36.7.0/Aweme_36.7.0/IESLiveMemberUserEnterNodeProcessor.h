@class NSString, NSMutableArray, IESLiveUserEnterViewFactory;
@protocol IESLiveUserService;

@interface IESLiveMemberUserEnterNodeProcessor : IESLiveUserEnterNodeProcessor <IESLivePrivilegeUserEnterRouter>

@property (retain, nonatomic) IESLiveUserEnterViewFactory *viewFactory;
@property (nonatomic) long long order;
@property (nonatomic) BOOL afterDelayTime;
@property (retain, nonatomic) NSMutableArray *pendingQueue;
@property (retain, nonatomic) NSMutableArray *processMessageIDList;
@property (nonatomic) BOOL optimizeFluency;
@property (nonatomic) BOOL ecomFansclubEnable;
@property (nonatomic) long long maxRetryCount;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)sendPrivilegeUserEnterTraceEventWithStep:(id)a0 extra:(id)a1 message:(id)a2;
- (id)createNodeWithMessage:(id)a0;
- (BOOL)enableUserEnterWithMessage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameWithNode:(id)a0;
- (void)createNodeViewWithNode:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (void)nodeViewDidClickedWithNode:(id)a0;
- (void)nodeViewDidAddedToContainerWithNode:(id)a0;
- (BOOL)isInValidTime:(id)a0;
- (id)generateTraceID;
- (void)setupSettingConfig;
- (BOOL)isAllowEnterWithMessage:(id)a0;
- (BOOL)hasEnableEffect:(id)a0;
- (BOOL)checkDressConfigExist:(id)a0;
- (BOOL)checkUserEnterBorderWithMessage:(id)a0;
- (BOOL)checkEnterEffectAssetExist:(id)a0;
- (BOOL)checkAlterNativeEffectConfigWithMessage:(id)a0;
- (id)dressIDWithmemMessage:(id)a0;
- (void)resourceReadyWithMessage:(id)a0;
- (void)monitor_enterAnimPlayStatus:(id)a0 type:(id)a1 dressID:(id)a2 loadResourceID:(id)a3 errorCode:(id)a4 duration:(id)a5 messageID:(id)a6;
- (void)monitor_resourceLoadWithResourceID:(long long)a0 isReady:(BOOL)a1 loadSuccess:(BOOL)a2 duration:(double)a3 message:(id)a4 assetType:(id)a5 extraParams:(id)a6;
- (id)p_createTrackParamsWithMessage:(id)a0;
- (void)trackAndUpdateAssetUsedTimeWithNode:(id)a0;
- (void)monitor_showWithNode:(id)a0 duration:(double)a1;
- (BOOL)judgeIfClassD:(id)a0;
- (id)imagesFromPieces:(id)a0;
- (id)needLoadImageURLsWithImages:(id)a0;
- (void)downloadImagesWithURLs:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)checkPendingQueue;

@end
