@class UIImageView, UIView;

@interface AWEIMMessageTabPadSplitSecondaryContainerView : UIView

@property (retain, nonatomic) UIView *seporatorLine;
@property (retain, nonatomic) UIView *secondaryView;
@property (retain, nonatomic) UIImageView *iconView;

- (void)p_setupSubviews;
- (struct CGSize { double x0; double x1; })secondarySize;
- (struct CGSize { double x0; double x1; })p_iconSize;
- (void)addSecondaryView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
