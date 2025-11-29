@class UILabel, UIImageView;

@interface BDPCDDynamicCardGraphicContainerCheckMoreView : UIView

@property (retain, nonatomic) UILabel *checkoutMoreLabel;
@property (retain, nonatomic) UIImageView *checkoutMoreImage;
@property (copy, nonatomic) id /* block */ onTapBlock;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tapAction:(id)a0;

@end
