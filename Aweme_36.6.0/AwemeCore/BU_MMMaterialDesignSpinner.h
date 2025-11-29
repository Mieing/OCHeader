@class CAMediaTimingFunction, CAShapeLayer;

@interface BU_MMMaterialDesignSpinner : UIView

@property (readonly, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) double lineWidth;
@property (nonatomic) BOOL hidesWhenStopped;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (nonatomic) double duration;

- (void)resetAnimations;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)setAnimating:(BOOL)a0;
- (void)initialize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)dealloc;
- (void)tintColorDidChange;
- (void)updatePath;

@end
