@class NSString, AWEDanmakuInputViewParamsConfig;
@protocol AWEDanmakuContainerControllerProtocol, AWEDanmakuPageContextProtocol;

@interface AWERVLDanmakuController : AWEVideoPlayControlBaseController <AWEDanmakuBaseControllerDelegate>

@property (retain, nonatomic) id<AWEDanmakuContainerControllerProtocol> danmakuController;
@property (retain, nonatomic) id<AWEDanmakuPageContextProtocol> danmakuContext;
@property (nonatomic) BOOL playingForDanmakuInputViewShow;
@property (retain, nonatomic) AWEDanmakuInputViewParamsConfig *inputParamsConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)onPlayerWillLoopPlaying:(id)a0;
- (double)currentPlayTime;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)onPlayerPause:(id)a0;
- (void)onPlayerBeInserted:(id)a0;
- (void)bindEvent;
- (BOOL)containerViewAppear;
- (void)addDanmakuContainerView;
- (BOOL)isCurrentModelSupportMask;
- (void)handleDanmakuInputButtonClick;
- (BOOL)shouldRelatedShowDanmaku;
- (double)videoDuration;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (id)playerController;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
