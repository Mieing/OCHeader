@class UIColor;

@interface CurveGradientView : UIView

@property (nonatomic) long long simulationLayerNum;
@property (nonatomic) unsigned long long curveType;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) float startAlpha;
@property (nonatomic) float endAlpha;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 curveType:(unsigned long long)a1 simulationLayerNum:(long long)a2 baseColor:(id)a3 startAlpha:(float)a4 endAlpha:(float)a5;
- (void)initSubviews;
- (id)xPoint;
- (id)calculateYValuesForCurveType;
- (void).cxx_destruct;

@end
