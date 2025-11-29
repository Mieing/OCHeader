@class NSString, ACCEditSingleVideoPlayControlView, UILabel, UIView, ACCAnimatedButton;
@protocol AWEMemoriesThemeEditSecondaryService;

@interface AWEMemoriesThemeEditPlayControlComponent : ACCSecondaryPageComponent <ACCEditPlayControlViewDelegate, ACCEditPreviewMessageProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *timeTitleLabel;
@property (retain, nonatomic) ACCAnimatedButton *pauseButton;
@property (retain, nonatomic) ACCEditSingleVideoPlayControlView *playControlView;
@property (nonatomic) double currentTotalDuration;
@property (nonatomic) BOOL isPlayingBeforeDrag;
@property (weak, nonatomic) id<AWEMemoriesThemeEditSecondaryService> themeEditSecondaryService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)playerCurrentPlayTimeChanged:(double)a0;
- (double)totalVideoDuration;
- (void)componentDidMount;
- (void)playStatusChanged:(long long)a0;
- (void)updateTimeTitleLabelWithCurrentTime:(double)a0 totalDuration:(double)a1;
- (id)generateTextWithDuration:(double)a0;
- (double)subViewHeight;
- (id)subViewInHierarchy;
- (unsigned long long)secondaryPageComponentType;
- (void)dragPlayTimeBegin:(double)a0;
- (void)dragPlayTimeChanged:(double)a0;
- (void)dragPlayTimeEnd:(double)a0;
- (void)updatePlayControlDurationIfNeeded;
- (void)trackerForMemoriesPlayerStatus:(BOOL)a0;
- (void)pauseButtonActionMethod:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
