@class AWEIMUITagLabelViewContainer, UIImageView, AWEIMUserLabelTopGreetingMessageProps, UILabel, UIButton;

@interface AWEIMUserLabelTopGreetingMessageView : UIView

@property (retain, nonatomic) AWEIMUserLabelTopGreetingMessageProps *props;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEIMUITagLabelViewContainer *tagContainerView;
@property (retain, nonatomic) UIButton *profileButton;

- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)onClickProfileButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)avatarTapped:(id)a0;

@end
