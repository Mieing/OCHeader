@class NSArray, UILabel;

@interface CSJVideoDetailLoadingView : UIView

@property (copy, nonatomic) NSArray *animationLayers;
@property (retain, nonatomic) UILabel *loadingLabel;

- (void)buildupViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_addCorners:(unsigned long long)a0 withView:(id)a1;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
