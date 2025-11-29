@class NSString, MinimizeTaskAudioPlayCtrlView;

@interface FinderAudioMinimizeTask : TingMinimizeBaseTask <MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate>

@property (retain, nonatomic) MinimizeTaskAudioPlayCtrlView *contentView;
@property (nonatomic) BOOL disableOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)taskContainerView;
- (id)contentDefaultImage;
- (void)updateContentViewIfNeedWithForce:(BOOL)a0;
- (void)onCloseButtonClicked:(id)a0;
- (void)onPlayOrPauseButtonClicked:(BOOL)a0 playCtrl:(id)a1;
- (void)onContentViewClicked:(id)a0;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)openTask;
- (void)onStateViewPlayPauseBtnClick:(BOOL)a0;
- (void).cxx_destruct;

@end
