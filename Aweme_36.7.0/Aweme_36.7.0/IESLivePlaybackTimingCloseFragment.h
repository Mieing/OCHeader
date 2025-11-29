@class NSString, HTSLiveToolbarItem, NSTimer, BDXBridgeEventSubscriber, UIButton;

@interface IESLivePlaybackTimingCloseFragment : IESLivePlaybackComponent <IESVSVideoPlayAction, IESLivePlaybackTimingCloseRouter, IESLiveAirPlayAction>

@property (retain, nonatomic) HTSLiveToolbarItem *toolbarItem;
@property (nonatomic) unsigned long long selectType;
@property (nonatomic) unsigned long long pauseType;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double leftTime;
@property (nonatomic) double originBrightness;
@property (retain, nonatomic) UIButton *blackBtn;
@property (retain, nonatomic) BDXBridgeEventSubscriber *lynxEventSubscriber;
@property (nonatomic) BOOL didLoad;
@property (nonatomic) BOOL isPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)showToast;
- (void)componentBindService;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)componentWillUnmount;
- (BOOL)isPausing;
- (void)unsubscribeEvent;
- (void)stopPlayer;
- (void)loadToolbarItem;
- (void)onAirplayProgressUpdate:(double)a0 duration:(double)a1;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)onVideoFinish;
- (void)updateToolbarItem;
- (unsigned long long)currentCloseType;
- (void)subscribeIndexSelectedEvent;
- (id)csvStrFromArray:(id)a0;
- (void)applicationDidEnterForeground;
- (void)loadLastSelect;
- (void)showSelectView;
- (id)getSelectList;
- (BOOL)canTakeEffect;
- (void)fakeLockScreen;
- (void)fakeUnlockScreen;
- (id)selectTypeStr:(id)a0;
- (id)getSelectTitles;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)pause;
- (void)applicationDidEnterBackground;
- (void)startTimer:(double)a0;
- (void)reset;
- (void)pauseTimer;
- (void)dealloc;
- (void)resumeTimer;
- (void)removeToolbarItem;

@end
