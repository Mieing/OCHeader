@class UIBezierPath, CAShapeLayer;

@interface ACCAdvancedRecordSettingGridView : UIView

@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) CAShapeLayer *drawLayer;
@property (nonatomic) unsigned long long numOfseparation;
@property (nonatomic) double lineWidth;

- (void)drawLine;
- (void)updateGrid;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
