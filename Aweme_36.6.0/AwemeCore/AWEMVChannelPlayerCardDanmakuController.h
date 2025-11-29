@class NSString;
@protocol AWEDanmakuContainerControllerProtocol, AWEDanmakuPageContextProtocol;

@interface AWEMVChannelPlayerCardDanmakuController : AWEMVChannelPlayerCardBaseController <AWEDanmakuBaseControllerDelegate>

@property (retain, nonatomic) id<AWEDanmakuContainerControllerProtocol> danmakuController;
@property (retain, nonatomic) id<AWEDanmakuPageContextProtocol> danmakuContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackToAction:(long long)a1;
- (void)bindEvent;
- (BOOL)shouldHandleDanmaKuTap:(id)a0;
- (void)addDanmakuContainerView;
- (void)progressViewDidTouchEnded;
- (void)prepareBeforeTransition;
- (void)configAfterBackFromTransition;
- (void)configAfterUpdatePlayerControllerInWindowPlayStatus;
- (BOOL)shouldShowDanmaku;
- (BOOL)isCurrentModelSupportMask;
- (void)playerWillLoopPlaying:(id)a0;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)playerController;
- (void)reset;
- (void)viewDidLoad;

@end
