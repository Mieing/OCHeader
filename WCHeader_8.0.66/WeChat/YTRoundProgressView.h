@class UIColor;

@interface YTRoundProgressView : UIView

@property (nonatomic) float progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *backgroundTintColor;
@property (nonatomic, getter=isAnnular) BOOL annular;

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
