@class YYLabel, AWEIMMessageStateView, UIImageView, UIImage, UILabel, UIView, AWEIMShareStoryMessageProps;

@interface AWEIMShareStoryMessageView : UIView

@property (retain, nonatomic) AWEIMShareStoryMessageProps *props;
@property (retain, nonatomic) UILabel *noticeLabel;
@property (retain, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UIImageView *playIconImageView;
@property (retain, nonatomic) UIView *nonexistentContainerView;
@property (retain, nonatomic) UIImageView *nonexistentImageView;
@property (retain, nonatomic) UILabel *nonexistentLabel;
@property (retain, nonatomic) UIView *textView;
@property (retain, nonatomic) YYLabel *storyReplayLabel;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) AWEIMMessageStateView *loadingView;
@property (retain, nonatomic) UIImage *locoalPostImage;

- (void)p_addGesture;
- (void)p_addSubviews;
- (id)bubbleShapeView;
- (void)p_initSubviews;
- (void)updateWithProps:(id)a0;
- (void)p_addConstraint;
- (void)p_onTap:(id)a0;
- (id)textViewLayer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
