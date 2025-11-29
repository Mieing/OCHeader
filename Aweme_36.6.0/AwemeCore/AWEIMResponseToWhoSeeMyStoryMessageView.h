@class YYLabel, UIImageView, AWEIMResponseToWhoSeeMyStoryMessageProps, UILabel, UIView, CAShapeLayer;

@interface AWEIMResponseToWhoSeeMyStoryMessageView : UIView

@property (retain, nonatomic) AWEIMResponseToWhoSeeMyStoryMessageProps *props;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIView *nonexistentContainerView;
@property (retain, nonatomic) UIImageView *nonexistentImageView;
@property (retain, nonatomic) UILabel *nonexistentLabel;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) CAShapeLayer *textViewLayer;
@property (retain, nonatomic) YYLabel *storyReplayLabel;
@property (retain, nonatomic) UIView *separateView;

- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
