@class UIImageView, UIView;

@interface AWEIMGroupShareCommandAvatarView : UIView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarBackgroundView;
@property (retain, nonatomic) UIView *avatarBackgroundWhiteView;
@property (retain, nonatomic) UIView *avatarBackgroundViewAnother;
@property (retain, nonatomic) UIView *avatarBackgroundWhiteViewAnother;
@property (retain, nonatomic) UIView *backGroundBaseView;
@property (nonatomic) double avatarSize;
@property (nonatomic) double backgroundViewPadding;
@property (nonatomic) double backgroundWhiteViewPadding;
@property (nonatomic) double backgroundHeight;

- (void)configWithConversation:(id)a0;
- (id)initAvatarSize:(double)a0 backgroundViewPadding:(double)a1 backgroundViewColor:(id)a2 backgroundWhiteViewPadding:(double)a3;
- (id)initAvatarSize:(double)a0 backgroundViewPadding:(double)a1 backgroundViewColor:(id)a2 backgroundHeight:(double)a3 backgroundWhiteViewPadding:(double)a4;
- (void)__setupUIWithType:(unsigned long long)a0;
- (void)__setupAvatarBackgroundWithType:(unsigned long long)a0;
- (void)__updateAvatarWithCon:(id)a0;
- (id)initAvatarSize:(double)a0 backgroundViewPadding:(double)a1 backgroundViewColor:(id)a2 backgroundHeight:(double)a3 backgroundWhiteViewPadding:(double)a4 avatarViewType:(unsigned long long)a5;
- (void)setWhiteBgViewHidden:(BOOL)a0;
- (id)p_placeHolderImageName;
- (void).cxx_destruct;

@end
