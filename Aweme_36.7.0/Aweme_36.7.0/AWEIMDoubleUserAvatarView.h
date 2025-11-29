@class UIImageView, CALayer;

@interface AWEIMDoubleUserAvatarView : UIView

@property (retain, nonatomic) UIImageView *leftAvatar;
@property (retain, nonatomic) UIImageView *rightAvatar;
@property (retain, nonatomic) CALayer *leftLayer;
@property (retain, nonatomic) CALayer *rightLayer;
@property (nonatomic) double avatarBorderWidth;

- (id)initWithProps:(id)a0;
- (void)p_setupUIWithProps:(id)a0;
- (void)systemFontSizeChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
