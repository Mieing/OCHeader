@class IESLiveTaskParam, NSString, IESLiveActivityBannnerView, IESLiveBannerListModel;
@protocol IESLiveBannerService;

@interface IESLiveActivityBannerFragment : IESLiveRoomComponent <IESLiveBannerDispatcher, HTSLiveMessageSubscriber, IESLiveStickerAnchorActions, IESLiveActivityModuleIndicatorInterface, IESLiveActivityBannerViewDelegate>

@property (retain, nonatomic) IESLiveActivityBannnerView *bannerView;
@property (retain, nonatomic) id<IESLiveBannerService> bannerService;
@property (retain, nonatomic) IESLiveTaskParam *taskParam;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLiveBannerListModel *bannerData;
@property (nonatomic) BOOL isStickerMovig;
@property (nonatomic) BOOL isInCleanScreen;
@property (nonatomic) BOOL isComponentHidden;
@property (nonatomic) BOOL isVSProgramEntranceShow;
@property (nonatomic) BOOL isInDegrade;
@property (retain, nonatomic) NSString *inRoomBannerMesageExtra;
@property (nonatomic) BOOL isInRoomBannerRequestFinished;
@property (nonatomic) BOOL hasSendInitData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentWillAppear;
- (void)componentWillDisappear;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)hideComponent;
- (void)showComponent;
- (void)remoteRoomDataReady:(id)a0;
- (id)requestPage;
- (void)FullLinkTrackEventWithName:(id)a0 params:(id)a1;
- (void)addTokenToSlardar;
- (void)removeTokenFromSlardar;
- (void)registerJSB;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (void)adjustHiddenWithSource:(id)a0;
- (void)hideBannerWithSource:(id)a0 reason:(id)a1;
- (void)showBannerWithSource:(id)a0 reason:(id)a1;
- (id)bannerTrackerParams;
- (void)receiveBannerData:(id)a0 error:(id)a1;
- (void)refreshBannerData:(id)a0 error:(id)a1 position:(int)a2;
- (void)showTopMultiBanner;
- (void)dismissTopMultiBanner;
- (BOOL)topMultiBannerIsHidden;
- (void)updateVSProgramEntranceLandscapeHidden:(BOOL)a0;
- (void)removeBanner;
- (void)renderBannerForceUseHybrid:(BOOL)a0;
- (void)sendDataToBannerToLoad;
- (id)commonURLParams;
- (BOOL)isInMSeq;
- (void)sendInitData;
- (void)sendMessageRefreshData;
- (void)handleBannerRenderData:(id)a0;
- (void)handleBannerDataURL;
- (void)createBannerViewWithMessage:(id)a0;
- (void)refreshBannerViewWithMessage:(id)a0;
- (void)activityBannerViewDidFinishLoad;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
