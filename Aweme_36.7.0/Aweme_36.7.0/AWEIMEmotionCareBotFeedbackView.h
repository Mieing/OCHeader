@class UIImageView;

@interface AWEIMEmotionCareBotFeedbackView : UIView

@property (copy, nonatomic) id /* block */ didClickLikeButton;
@property (copy, nonatomic) id /* block */ didClickDislikeButton;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UIImageView *dislikeImageView;

- (void)p_addGesture;
- (void)p_constraintSubViews;
- (void)p_onTapLikeButton;
- (void)p_onTapDislikeButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
