@class NSMutableArray;

@interface MMLockOverlayView : UIView

@property (nonatomic) BOOL errored;
@property (retain, nonatomic) NSMutableArray *pointsToDraw;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetView;
- (void)hightlightError;
- (void).cxx_destruct;

@end
