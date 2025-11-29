@class UIImage, UIColor;

@interface AWEIMEmotionCareBotFeedbackProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ didClickLikeButton;
@property (copy, nonatomic) id /* block */ didClickDislikeButton;
@property (retain, nonatomic) UIImage *likeButtonImage;
@property (retain, nonatomic) UIImage *dislikeButtonImage;
@property (retain, nonatomic) UIColor *btnBackgroundColor;

- (void).cxx_destruct;

@end
