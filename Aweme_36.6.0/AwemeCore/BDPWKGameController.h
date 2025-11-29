@class BDPWKGamePage, NSString, UIView, BDPWKKryptonView;
@protocol BDPToolBarViewProtocol;

@interface BDPWKGameController : BDPNativeGameBaseController <BDPScreenRecorderFactoryProtocol>

@property (retain, nonatomic) BDPWKKryptonView *kryptonView;
@property (weak, nonatomic) UIView<BDPToolBarViewProtocol> *toolBarView;
@property (nonatomic) BOOL useHighPerformancePlus;
@property (nonatomic) BOOL isUnityCustomLoadingViewRemoving;
@property (nonatomic) BOOL enableMetal;
@property (retain, nonatomic) BDPWKGamePage *wkGamePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startExceptionMonitor;
- (void)initGameView;
- (id)getOrCreateScreenRecorder;
- (void)stopExceptionMonitor;
- (id)getCurrentGameView;
- (void)setupGameView;
- (void)updateLaunchInfo;
- (void)gameViewPause;
- (void)gameViewResume;
- (void)gameViewStop;
- (void)updateGameViewAlpha:(double)a0;
- (void)setUnityCustomLoadingView:(id)a0;
- (void)hideUnityCustomLoadingView:(id)a0;
- (void)addKryptonView;
- (void)processGameJSLoadedEvent;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithUniqueID:(id)a0;

@end
