@class NSArray, NSTimer;

@interface DotLoadingView : UIView

@property (retain, nonatomic) NSArray *dots;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSArray *dotColors;
@property (nonatomic) double dotDiameter;
@property (nonatomic) double spacing;

- (void)setupDots;
- (void)updateDotColors;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
