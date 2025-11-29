@class IESLiveTaskNewBannerWebView, IESLiveTaskParam, NSString, HTSLiveTaskBannerStore, NSMutableArray, IESLiveBannerListModel;
@protocol IESLiveInternalRouter, HTSLiveTaskBannerActions, IESLiveURLSchemaHandler;

@interface HTSLiveTaskBannerFragment : IESLiveRoomComponent <IESLiveAutoRotateAction, IESLiveTaskBannerViewNewDelegate, HTSLiveMessageSubscriber, HTSLiveTaskBannerReactions, HTSLiveTaskGiftRouter, IESLiveTaskBannerRouter>

@property (retain, nonatomic) HTSLiveTaskBannerStore *store;
@property (retain, nonatomic) id<HTSLiveTaskBannerActions> actionCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) IESLiveTaskNewBannerWebView *bannerView;
@property (retain, nonatomic) IESLiveBannerListModel *banners;
@property (nonatomic) BOOL isHideComponent;
@property (retain, nonatomic) NSMutableArray *messageQueue;
@property (nonatomic) BOOL isCreatingAndLoadingBannerView;
@property (nonatomic) BOOL isStickerMoving;
@property (nonatomic) BOOL isInClear;
@property (nonatomic) BOOL isInDegrade;
@property (retain, nonatomic) IESLiveTaskParam *taskParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL taskBannerShowing;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)didAutoRotateToOrientation:(long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (void)playTaskFinishedAnimationWithTitle:(id)a0 content:(id)a1;
- (void)playFirstLiveFinishedAnimationWithTitle:(id)a0 content:(id)a1;
- (void)hideTaskBanner;
- (void)showTaskBanner;
- (void)removeBannerIfNeeded;
- (void)insertTaskItemsIfNeeded;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (void)adjustHiddenWithSource:(id)a0;
- (void)hideBannerWithSource:(id)a0 reason:(id)a1;
- (void)showBannerWithSource:(id)a0 reason:(id)a1;
- (BOOL)needUseRoomAuthLongTouch;
- (id)createBannerViewWithModel:(id)a0;
- (void)renderBanners:(id)a0;
- (void)flushMessageQueue;
- (void)playAnimationWithLottieName:(id)a0 completionAnimation:(BOOL)a1;
- (void)moveAnimation:(id)a0;
- (void)taskBannerViewDidClick:(id)a0;
- (void)taskBannerViewHybridContainerCreated:(id)a0;
- (void)taskBannerViewDidFinishLoad;
- (id)bannerTrackerParams;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;
- (id)labelWithText:(id)a0 font:(id)a1;

@end
