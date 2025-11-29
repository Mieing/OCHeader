@class AWEIMShareNoticeMessageContentProps, UIImageView, UILabel, UIView;

@interface AWEIMShareNoticeMessageContentView : UIView

@property (retain, nonatomic) UIView *awemeCoverBGView;
@property (retain, nonatomic) UIImageView *awemeCoverImageView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIView *labelContainer;
@property (copy, nonatomic) id /* block */ tapAction;
@property (retain, nonatomic) AWEIMShareNoticeMessageContentProps *props;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initProps;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
