@class UIColor;

@interface YTBarProgressView : UIView

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *progressRemainingColor;
@property (retain, nonatomic) UIColor *progressColor;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerForKVO;
- (void)unregisterFromKVO;
- (id)observableKeypaths;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
