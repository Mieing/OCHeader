@class WCFinderFeedBubbleButton, UIImageView, UILabel, UIView, NSObject;

@interface WCFinderFeedBubbleView : MMUIView

@property (nonatomic) unsigned long long ationButtonShowType;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *textViewBox;
@property (retain, nonatomic) WCFinderFeedBubbleButton *actionButton;
@property (retain, nonatomic) NSObject *model;
@property (nonatomic) double textAreaMaxWidth;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ clickButtonBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void *)defineLabelsFlex:(void *)a0;
- (void)setBubbleTitle:(id)a0 subtitle:(id)a1 image:(id)a2;
- (void)setButtonTitle:(id)a0 subtitle:(id)a1 image:(id)a2;
- (void)setButtonTitle:(id)a0 subtitle:(id)a1 image:(id)a2 ationButtonShowType:(unsigned long long)a3;
- (void)doLayout;
- (void)layoutSubviews;
- (void)setButtonEnabled:(BOOL)a0;
- (id)getActionButtonBackgroundColor;
- (id)getContainerView;
- (void)onClickActionButton;
- (void).cxx_destruct;

@end
