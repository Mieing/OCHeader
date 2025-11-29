@class AWELivePreStreamLongPressViewModel, IESLiveLongPressStore, NSString, UILongPressGestureRecognizer;

@interface AWELivePreStreamLongPressElement : AWELiveBaseElement <AFDLongPressDynamicDurationProtocol, AWELiveLongPressViewModelReation, IESLiveLongPressActions, AWELivePreStreamEnterRoomDataProvider>

@property (nonatomic) double startWatchingTime;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) AWELivePreStreamLongPressViewModel *viewModel;
@property (retain, nonatomic) IESLiveLongPressStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)initializeElement;
- (void)didSetAttachingDIContext;
- (id)aAWEPadModuleAdapter;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (void)provideEenterLiveRoomParamasWithContext:(id)a0;
- (BOOL)onLiveRoomDeletedByLongPress:(id)a0;
- (void)followAnchorSuccessWithLongPress:(id)a0;
- (void)unfollowAnchorSuccessWithLongPress:(id)a0;
- (void)followAnchorSuccessWithLongPress;
- (void)unfollowAnchorSuccessWithLongPress;
- (void)viewController_viewWillDisAppear;
- (void)triggerLongPress:(id)a0;
- (void)addLongPressMenu;
- (void)newLivePreStreamDisLikeButtonSubmit:(id)a0;
- (void)p_handleFollowAuthor:(id)a0;
- (void)prepareToShowLongPressView:(id)a0;
- (void)performRecommendGuideWithCompletion:(id /* block */)a0 hasRecommend:(BOOL)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)dealloc;

@end
