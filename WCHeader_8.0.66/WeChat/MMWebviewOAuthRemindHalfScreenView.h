@class UIImageView, UILabel, UIView, UIButton;

@interface MMWebviewOAuthRemindHalfScreenView : UIView

@property (copy, nonatomic) id /* block */ authblock;
@property (retain, nonatomic) UIImageView *warningIcon;
@property (retain, nonatomic) UILabel *remindLabel;
@property (retain, nonatomic) UIButton *authButton;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *highlightView;

- (id)initWithAuthBlock:(id /* block */)a0;
- (void)initViews;
- (void)layoutSubviews;
- (double)calceRemindLabelWidthWithWidth:(double)a0;
- (double)calcButtonPaddingWithWidth:(double)a0;
- (void)updateMaskLayer;
- (void)setWidth:(double)a0;
- (void)onAuthButtonClicked;
- (void)showHighlightAnimation;
- (void).cxx_destruct;

@end
