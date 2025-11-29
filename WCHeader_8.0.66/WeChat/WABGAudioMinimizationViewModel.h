@class MiniAudioTaskContentView, WABGAudioMinimizationPlayerView, MinimizeTaskData, NSString, WABGAudioMinimizationItemInfo;
@protocol WABGAudioMinimizationViewModelDelegate;

@interface WABGAudioMinimizationViewModel : NSObject <MinimizeTaskContainerInfoDelegate, MiniAudioTaskContentViewDelegate>

@property (retain, nonatomic) MiniAudioTaskContentView *taskContentView;
@property (retain, nonatomic) WABGAudioMinimizationPlayerView *playerView;
@property (readonly, nonatomic) WABGAudioMinimizationItemInfo *itemInfo;
@property (readonly, nonatomic) MinimizeTaskData *taskData;
@property (weak, nonatomic) id<WABGAudioMinimizationViewModelDelegate> delegate;
@property (nonatomic) BOOL isReadyToShow;
@property (readonly, nonatomic) BOOL canShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemInfo:(id)a0;
- (void)updateItemInfo:(id)a0;
- (void)updateIsPlaying;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerViewFrame;
- (id)cropImageTo3by4:(id)a0;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentSizeChangeTo:(struct CGSize { double x0; double x1; })a0 anime:(BOOL)a1;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)a0;
- (void)onMiniAudioContentViewPlayTypeButtonClicked:(long long)a0;
- (void)disableAVPlayerLayerAnimation:(BOOL)a0;
- (void)onEnterMinimize;
- (void)onDismissMinimize;
- (void).cxx_destruct;

@end
