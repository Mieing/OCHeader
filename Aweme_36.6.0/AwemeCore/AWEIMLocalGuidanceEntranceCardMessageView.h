@class UIStackView, UIImageView, UIView, UILabel, AWEIMLocalGuidanceEntranceCardMessageProps;

@interface AWEIMLocalGuidanceEntranceCardMessageView : UIView

@property (retain, nonatomic) AWEIMLocalGuidanceEntranceCardMessageProps *props;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIStackView *labelContainer;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
