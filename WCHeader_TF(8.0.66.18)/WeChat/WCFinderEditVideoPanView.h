@class UIView;

@interface WCFinderEditVideoPanView : UIView

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) UIView *line;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
