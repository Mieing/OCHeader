@class UIView, AWEDemaciaPlayerVideoModel, NSString, AWEDPlayerConfig, NSDictionary, AWEProfileBrandVideoModel, AWEAnimatedButton, UIViewController;
@protocol AWEDPlayerProtocol, AWEDemaciaPlayerView;

@interface AWEProfileTopVideoViewController : UIViewController <AWEDemaciaPlayerViewDelegate, AWEDPlayerDelegate, AWEDPlayerActionDelegate>

@property (retain, nonatomic) UIView<AWEDemaciaPlayerView> *playerView;
@property (retain, nonatomic) AWEAnimatedButton *closebtn;
@property (retain, nonatomic) UIView *circleCloseView;
@property (retain, nonatomic) AWEProfileBrandVideoModel *brandInfo;
@property (retain, nonatomic) AWEDemaciaPlayerVideoModel *playerVideoModel;
@property (retain, nonatomic) NSDictionary *paramMap;
@property (nonatomic) BOOL firstPlay;
@property (nonatomic) long long lastDeviceOrientation;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double playBeginTime;
@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *generalPlayer;
@property (retain, nonatomic) AWEDPlayerConfig *generalPlayerConfig;
@property (nonatomic) BOOL isFullScreen;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) BOOL isPadSplitting;
@property (copy, nonatomic) id /* block */ closeCallBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (void)playerDidReadyForDisplay:(id)a0;
- (id)aAWEPadModuleAdapter;
- (double)startPlayTime;
- (void)updateGeneralPlayerLayout;
- (id)bottomElementArray;
- (id)controllerBelowBaseUIArray;
- (id)elementConfigWithType:(unsigned long long)a0;
- (id)controllerConfigWithType:(unsigned long long)a0;
- (void)demaciaPlayerFullScreenButtonClicked:(long long)a0;
- (void)demaciaPlayerBackButtonClicked;
- (void)generalViewController:(id)a0 willClickElementType:(unsigned long long)a1;
- (BOOL)useGeneralPlayer;
- (id)buildDPlayerConfig;
- (BOOL)isVideoLandscape;
- (id)initWithBrandInfo:(id)a0 paramMap:(id)a1;
- (void)updateUIWithIsFullScreen:(BOOL)a0 closetBtnOffsetY:(double)a1;
- (void)updateUIWithOffsetY:(double)a0 alpha:(double)a1;
- (void)setCloseBtnBackViewHidden:(BOOL)a0;
- (void)updateCloseBtnAlpha:(double)a0;
- (void)updateGeneralPlayer;
- (double)endPlayTime;
- (id)demaciaPlayerModelFromAweme:(id)a0;
- (void)windowDidBecomeVisible:(id)a0;
- (void)gestureInteractive:(double)a0;
- (void)rotatePlayView:(long long)a0;
- (id)topElementArray;
- (void)updateCloseBtnOffsetY:(double)a0;
- (void)playerViewPlay;
- (void)gestureCancel:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)addNotificationObservers;
- (void)appWillResignActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)appDidBecomeActive:(id)a0;

@end
