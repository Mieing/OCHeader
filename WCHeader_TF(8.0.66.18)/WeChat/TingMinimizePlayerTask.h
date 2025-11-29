@class NSString, MinimizeTaskAudioPlayCtrlView;

@interface TingMinimizePlayerTask : TingMinimizeBaseTask <MinimizeTaskPlayCtrlDelegate, MMImageLoaderObserver>

@property (retain, nonatomic) MinimizeTaskAudioPlayCtrlView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateContentViewIfNeedWithForce:(BOOL)a0;
- (BOOL)canMinimizeBecomeActive:(id)a0;
- (void)__doSetContentViewImage:(id)a0 url:(id)a1;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (id)contentDefaultImage;
- (id)taskContainerView;
- (void)onStateViewPlayPauseBtnClick:(BOOL)a0;
- (void)onStateViewNextBtnClick;
- (void)onCloseButtonClicked:(id)a0;
- (void)onPlayOrPauseButtonClicked:(BOOL)a0 playCtrl:(id)a1;
- (void)onContentViewClicked:(id)a0;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onMiniAudioContentViewOuterContentClicked;
- (BOOL)handleOpenTask:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
