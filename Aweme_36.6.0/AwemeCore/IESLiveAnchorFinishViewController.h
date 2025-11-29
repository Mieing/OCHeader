@class UIView, NSString, UIImageView, UIButton, IESLiveFinishWebViewConfig, IESLiveAnchorPerfTrackImpl, NSNumber, BDXBridgeEventSubscriber;
@protocol IESLiveHybridContainerFactory, IESHYContainerProtocol, IESLiveAudienceRoomAwareness, IESLiveOrientationConfig, IESLivePerfSampler, IESLiveRoomService, IESLiveURLSchemaHandler;

@interface IESLiveAnchorFinishViewController : UIViewController <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> awareness;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webviewFactory;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) NSString *finishUrl;
@property (copy, nonatomic) NSString *finishSchema;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL statusBarOriginalHidden;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> roomAwarenessw;
@property (retain, nonatomic) IESLiveFinishWebViewConfig *webViewConfig;
@property (retain, nonatomic) NSNumber *closeBtnStyle;
@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)setStatusBarBackgroundColor:(id)a0;
- (void)closeVC;
- (id)initWithRoomModel:(id)a0;
- (void)addXBridgeSubscriber;
- (void)setupWebFinishViews;
- (void)setupPerSampler;
- (void)removeXBridgeSubscriber;
- (void)trackEnterFinishRoom;
- (void)parseWebViewConfig;
- (void)changeCloseBtnStyle:(id)a0;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
