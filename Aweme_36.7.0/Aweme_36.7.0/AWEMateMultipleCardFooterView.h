@class UILabel, AFDButton, UIImageView;

@interface AWEMateMultipleCardFooterView : UIView

@property (retain, nonatomic) UILabel *swipeUpHintLabel;
@property (retain, nonatomic) AFDButton *replaceUsersButton;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) id /* block */ replaceUsersBlock;
@property (nonatomic) BOOL showsSlideUpHint;
@property (nonatomic) BOOL showReplaceButton;

- (void)p_clickReplaceUsersButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
