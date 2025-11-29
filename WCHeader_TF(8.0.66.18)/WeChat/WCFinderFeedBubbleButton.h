@class UIImageView, UILabel;

@interface WCFinderFeedBubbleButton : MMUIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) id /* block */ getActionButtonHeightBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)setupUI;
- (void)updateTitle:(id)a0 titleColor:(id)a1 subtitle:(id)a2 iconImage:(id)a3;
- (void)updateLayout;
- (double)getActionButtonHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;

@end
