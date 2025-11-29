@class AWEDPlayerProgressContainer, AWEDPlayerProgressPreviewView, AWEPageContext, UIView, AWEAwemeModel;
@protocol AWEDPlayerPageContextProtocol, AWEDPlayerProgressViewDelegate;

@interface AWEDPlayerProgressView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEDPlayerPageContextProtocol> *context;
@property (nonatomic) double playTime;
@property (nonatomic) double totalTime;
@property (nonatomic) double playTimeBeforeDrag;
@property (retain, nonatomic) UIView *playedView;
@property (retain, nonatomic) AWEDPlayerProgressContainer *progressContainer;
@property (retain, nonatomic) UIView *touchingPlayedView;
@property (retain, nonatomic) UIView *touchingThumbView;
@property (retain, nonatomic) UIView *touchingContainer;
@property (retain, nonatomic) UIView *touchingEffectView;
@property (retain, nonatomic) AWEDPlayerProgressPreviewView *previewContainer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isAnimatingToEnd;
@property (copy, nonatomic) id /* block */ animatedToEndBlock;
@property (nonatomic) unsigned long long sliderState;
@property (nonatomic) double seekingToTime;
@property (weak, nonatomic) id<AWEDPlayerProgressViewDelegate> delegate;

+ (double)sliderHeight;
+ (double)sliderTopOffset;
+ (double)sliderBottomOffset;

- (void)updateDPlayerState:(unsigned long long)a0;
- (void)refreshPlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (void)playerWillStartNextLoop;
- (void)handleProgressViewPanBegin:(double)a0;
- (void)handleProgressViewPanEnd:(double)a0;
- (void)updateWithModel:(id)a0 currentPlayTime:(double)a1 context:(id)a2;
- (void)updateWithPlayTime:(double)a0 canPlayTime:(double)a1 animated:(BOOL)a2;
- (void)updateProgressSliderState:(unsigned long long)a0;
- (void)showPreview:(BOOL)a0 targetTime:(double)a1 scrollChapterAnimated:(BOOL)a2;
- (double)targetTimeWithOffset:(double)a0;
- (void)handleProgressViewPanChanging:(double)a0;
- (void)updateForSimplePlayerWithCurrentPlayTime:(double)a0 totalTime:(double)a1 context:(id)a2;
- (void)updateWithPlayTime:(double)a0 canPlayTime:(double)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)setupUI;
- (void)handlePanGesture:(id)a0;

@end
