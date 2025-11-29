@class HTSEventContext, NSString, TabResponse, UIView, IESLiveGCDTimer, NSDictionary, HTSLiveVerticalTypeInfo, IESLiveFeedDrawerViewControllerContext;
@protocol IESHYContainerProtocol;

@interface IESLiveFeedDrawerLynxViewController : UIViewController <IESHYHybridViewLifecycleProtocol, IESLiveDrawerFeedContainerProtocol>

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (retain, nonatomic) UIView *tabBar;
@property (retain, nonatomic) UIView *pageContainer;
@property (retain, nonatomic) TabResponse *tabModel;
@property (retain, nonatomic) HTSLiveVerticalTypeInfo *verticalTypeInfo;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSDictionary *initialData;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL hasCreateContainer;
@property (nonatomic) BOOL isPreloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL disableRefresh;
@property (retain, nonatomic) IESLiveFeedDrawerViewControllerContext *context;

- (id)clickParams;
- (void)registerBridge;
- (long long)shuffleTime:(long long)a0 upper:(long long)a1;
- (void)trackAppear;
- (id)videoIdForCurrentRoom;
- (void)willAutoRotateTo:(long long)a0;
- (void)didAutoRotateTo:(long long)a0;
- (BOOL)canHideWithGesture;
- (void)updateTrackContext:(id)a0;
- (id)initWithTabModel:(id)a0 context:(id)a1;
- (void)updateDefaultTabWithVerticalInfo:(id)a0 roomId:(id)a1;
- (BOOL)disablePanGestureWithOtherResponder:(id)a0;
- (void)checkIfNeedPreloadAnnieXContainer;
- (void)configAnnieXContainer;
- (id)generateInitialData;
- (id)generateViewedHistory;
- (void)drawerUnFollowAction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
