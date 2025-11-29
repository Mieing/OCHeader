@class UIImage, UIImageView, UILabel;

@interface MMMusicRoundCorneredBarButton : UIView

@property (retain, nonatomic) UIImage *normalImage;
@property (retain, nonatomic) UIImage *highlightedImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) double paddingHorizontal;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ tappedBlock;

- (id)initWithImage:(id)a0 highlightedImage:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)handleTap:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
