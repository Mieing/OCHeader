@class UIImageView, UIView;

@interface IESGCPCGSameStyleLoadingGiftView : UIView

@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *goldImageView;
@property (retain, nonatomic) UIView *iconContainer;

- (void)remakeConstrainsWithOrientation:(long long)a0;
- (void)updateGiftIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupSubviews;

@end
