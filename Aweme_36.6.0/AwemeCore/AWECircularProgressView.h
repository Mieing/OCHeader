@class _AWECircularProgressViewKVOObject, UIColor;

@interface AWECircularProgressView : UIView

@property (retain, nonatomic) _AWECircularProgressViewKVOObject *kvoObject;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double backgroundWidth;
@property (nonatomic) double progressRadius;
@property (nonatomic) double backgroundRadius;

- (id)observableKeypaths;
- (void).cxx_destruct;
- (void)setupObservers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
