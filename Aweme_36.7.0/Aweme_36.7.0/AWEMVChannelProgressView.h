@class AWEMVChannelProgressPreviewView, AWEAwemeModel, UIView, AWEMVChannelPlayerCardContext;
@protocol AWEMVChannelProgressViewDelegate;

@interface AWEMVChannelProgressView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEMVChannelPlayerCardContext *context;
@property (nonatomic) double playTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double playTimeBeforeDrag;
@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) UIView *progressContainer;
@property (retain, nonatomic) UIView *touchingPlayedView;
@property (retain, nonatomic) UIView *touchingThumbView;
@property (retain, nonatomic) UIView *touchingContainer;
@property (retain, nonatomic) UIView *touchingEffectView;
@property (retain, nonatomic) AWEMVChannelProgressPreviewView *previewContainer;
@property (nonatomic) double lastPlayTime;
@property (nonatomic) unsigned long long sliderState;
@property (nonatomic) double seekingToTime;
@property (weak, nonatomic) id<AWEMVChannelProgressViewDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEBrandColorAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)aAWEBrandColorAdapter;
- (void)refreshPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)formateCount:(id)a0;
- (void)handleProgressViewPanBegin:(double)a0;
- (void)handleProgressViewPanEnd:(double)a0;
- (void)updateWithModel:(id)a0 currentPlayTime:(double)a1 context:(id)a2;
- (id)sliderThemeColor;
- (void)updateWithPlayTime:(double)a0 canPlayTime:(double)a1 animated:(BOOL)a2;
- (void)updateProgressSliderState:(unsigned long long)a0;
- (void)showPreview:(BOOL)a0 targetTime:(double)a1 scrollChapterAnimated:(BOOL)a2;
- (BOOL)isPointInProgressContainer:(struct CGPoint { double x0; double x1; })a0;
- (double)targetTimeWithOffset:(double)a0;
- (void)handleProgressViewPanChanging:(double)a0;
- (void)trackSlideProgressFromTime:(double)a0 toTime:(double)a1;
- (void)updateState:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
