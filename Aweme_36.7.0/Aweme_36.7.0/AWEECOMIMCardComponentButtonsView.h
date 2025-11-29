@class NSArray, UIView;

@interface AWEECOMIMCardComponentButtonsView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (copy, nonatomic) NSArray *buttonViewArr;
@property (nonatomic) double clickInterval;

+ (double)heightWithData:(id)a0;

- (void)didButtonClick:(id)a0;
- (void)updateWithData:(id)a0 width:(double)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
