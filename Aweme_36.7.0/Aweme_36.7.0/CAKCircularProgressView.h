@class UIColor, CAKCircularProgressViewKVOObject;

@interface CAKCircularProgressView : UIView

@property (retain, nonatomic) CAKCircularProgressViewKVOObject *kvoObject;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double backgroundWidth;
@property (nonatomic) double progressRadius;
@property (nonatomic) double backgroundRadius;
@property (nonatomic) long long type;

- (void)drawRectRound:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRectSector:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)observableKeypaths;
- (void).cxx_destruct;
- (void)setupObservers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
