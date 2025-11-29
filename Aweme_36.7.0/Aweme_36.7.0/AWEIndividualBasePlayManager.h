@class UIView, AWEIndividualPlayController, NSTimer, AWEIndividualPlayHelper, NSArray, UIWindow, NSString, AWEIndividualPlayRootViewController;

@interface AWEIndividualBasePlayManager : NSObject <AWEIndividualPlayControllerVideoDelegate>

@property (retain, nonatomic) AWEIndividualPlayController *playController;
@property (weak, nonatomic) AWEIndividualPlayRootViewController *rootVC;
@property (retain, nonatomic) AWEIndividualPlayHelper *helper;
@property (retain, nonatomic) UIWindow *individualWindow;
@property (retain, nonatomic) UIWindow *mainWindow;
@property (copy, nonatomic) id /* block */ loadRealWindowBlock;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) BOOL isIndividualPlay;
@property (nonatomic) BOOL isIndividualFirstFrameShown;
@property (nonatomic) BOOL isActive;
@property (retain, nonatomic) NSTimer *changeWindowTimer;
@property (readonly, copy, nonatomic) NSArray *cacheFeedList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)individualPlayIfPerhaps;
+ (id)shareInstance;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)playIfActive;
- (void)addNotification;
- (void)removeNotification;
- (BOOL)insertPlayerControllerForForYouWithBlock:(id /* block */)a0;
- (BOOL)tryLoadNewRealWindow:(id /* block */)a0;
- (void)individualHandleRealWindow:(id)a0;
- (BOOL)shouldRootWindowVisible;
- (unsigned long long)loadForYouType;
- (void)initRootVCAndMakeKey;
- (void)makeRootWindowUnVisibleIfNeeded;
- (void)initVideoAndPrepare;
- (void)markLaunched;
- (void)loadMainWindow;
- (void)initChangeWindowTimer;
- (void)onFirstFrame;
- (void)onPlaybackFailed;
- (void)loadUIOnFirstFrame;
- (id)createMaskView;
- (void)changeWindowAndReset;
- (void)invalidateChangeWindowTimerIfNeeded;
- (void)makeRootWindowVisible;
- (void)changeWindowTimerTick;
- (void).cxx_destruct;
- (void)reset;
- (void)appWillResignActive:(id)a0;
- (void)appDidBecomeActive:(id)a0;

@end
