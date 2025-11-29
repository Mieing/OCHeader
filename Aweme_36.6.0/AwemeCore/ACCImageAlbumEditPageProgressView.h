@class UIView;

@interface ACCImageAlbumEditPageProgressView : UIView

@property (nonatomic) double contentWidth;
@property (nonatomic) long long pageIndex;
@property (nonatomic) long long lastUpdateProgressPage;
@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) BOOL usingPageControlType;
@property (nonatomic) BOOL useSimpleIndex;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) BOOL active;
@property (copy, nonatomic) id /* block */ selectedIndexHander;

+ (double)defaultHeight;

- (double)itemGap;
- (void)setupViewIfNeed;
- (void)p_tapGestureHandler:(id)a0;
- (void)p_updateProgressParagraphShapeLayer;
- (id)initWithViewWidth:(double)a0;
- (void)updateViewWithAnimation:(BOOL)a0;
- (void)p_updateProgressViewWithTargetPage:(long long)a0 progress:(double)a1 animation:(BOOL)a2;
- (void)p_updateProgressViewWithTargetPage:(long long)a0 animation:(BOOL)a1;
- (double)p_getItemWidth;
- (void)setPageIndex:(long long)a0 animation:(BOOL)a1;
- (void).cxx_destruct;
- (void)pauseAnimation;
- (void)setProgress:(double)a0 animated:(BOOL)a1;
- (void)resetAnimation;

@end
