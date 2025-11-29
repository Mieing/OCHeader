@class UIColor, UIImage, MMUIImageView;

@interface WCCanvasMusicPlayButton : MMUIButton

@property (retain, nonatomic) UIColor *viewColor;
@property (nonatomic) double iconWidth;
@property (retain, nonatomic) UIImage *circleImage;
@property (retain, nonatomic) UIImage *circleLoadingImage;
@property (retain, nonatomic) UIImage *playIconImage;
@property (retain, nonatomic) UIImage *pauseIconImage;
@property (retain, nonatomic) MMUIImageView *bgView;
@property (retain, nonatomic) MMUIImageView *iconView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) long long playState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewColor:(id)a1 iconWidth:(double)a2;
- (void)dealloc;
- (void)initViews;
- (void)updateViews;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (void).cxx_destruct;

@end
