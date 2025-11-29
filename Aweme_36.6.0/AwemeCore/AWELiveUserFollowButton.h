@class UIButton, UIImage;

@interface AWELiveUserFollowButton : UIView

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIImage *followBgImage;
@property (nonatomic) BOOL isFollowAnim;
@property (copy, nonatomic) id /* block */ tapHandler;

- (id)initWithDIContext:(id)a0;
- (void)didClickButton:(id)a0;
- (void)playFollowAnimationWithCompletion:(id /* block */)a0;
- (void)loadSubViews;
- (id)buttonBgImageWithColorArray:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
