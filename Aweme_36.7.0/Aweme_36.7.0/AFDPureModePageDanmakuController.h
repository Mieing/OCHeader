@class NSString;
@protocol AWEDanmakuContainerControllerProtocol, AWEDanmakuPageContextProtocol;

@interface AFDPureModePageDanmakuController : AWEBaseController <AWEDanmakuBaseControllerDelegate, AFDPureModePageControllerProtocol>

@property (retain, nonatomic) id<AWEDanmakuContainerControllerProtocol> danmakuController;
@property (retain, nonatomic) id<AWEDanmakuPageContextProtocol> danmakuContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoWillLoopTimes:(long long)a0;
- (void)containerDidPlayOrPause:(BOOL)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)didUpdatePlayerController:(id)a0;
- (void)willEnterScaleMode:(BOOL)a0;
- (void)handleAppWillResignActiveNotification:(id)a0;
- (void)setEvent;
- (id)danmakuContainerView;
- (void)updateDisplayDanmakuInfo;
- (void)resumeDanmakuPlayer;
- (void)pauseDanmakuPlayer;
- (void)stopDanmakuPlayer;
- (BOOL)canShowDanmakuView;
- (void)handleAppDidBecomeActiveNotification:(id)a0;
- (void)addDanmakuContainerView;
- (void)videoProgressChanged:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)setData:(id)a0;
- (id)playerController;
- (void)viewWillAppear;
- (id)view;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear;
- (void)resetInfo;
- (void)viewWillDisappear;

@end
