@class AWEStoryProgressContainerView, UILabel, NSString;

@interface AWEIMAwemeMediaDisplayViewController_WatchOnceVideo : AWEIMAwemeMediaDisplayViewController_Video <IESVideoPlayerDelegate>

@property (retain, nonatomic) AWEStoryProgressContainerView *progressContainerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (nonatomic) BOOL isTextEditing;
@property (nonatomic) BOOL isWatchEnd;
@property (nonatomic) unsigned long long loopCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)setAwemeModel:(id)a0;
- (BOOL)longPressModuleViewEnable;
- (BOOL)shouldAddVideoProgressSlider;
- (void)p_onViewDidTapped;
- (BOOL)videoShouldRemoveDoubleLike;
- (void)setupUIWith:(id)a0;
- (void)p_addPeriodicTimeObserver;
- (void)p_fillMessage:(id)a0 withContent:(id)a1;
- (void)p_handleKeyboardShowNoti:(id)a0;
- (void)p_handleKeyboardHideNoti:(id)a0;
- (void)p_updatePlayProgress;
- (BOOL)videoShouldEnablePinchAndOtherOptimize;
- (void)p_dismissWatchOnceMediaDisplayer;
- (void)playerWillLoopPlaying:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addObservers;
- (void)removeObservers;

@end
