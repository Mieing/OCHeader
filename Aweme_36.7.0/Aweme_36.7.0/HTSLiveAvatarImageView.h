@class UIImageView, IESLiveAvatarWithoutEffectView, IESLiveAvatarRotatingCircleView, UIView, UILabel;
@protocol IESLiveAvatarBorderItem;

@interface HTSLiveAvatarImageView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *honorView;
@property (retain, nonatomic) IESLiveAvatarWithoutEffectView *withoutEffectView;
@property (retain, nonatomic) IESLiveAvatarRotatingCircleView *rotatingView;
@property (retain, nonatomic) UIView *tagView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) id<IESLiveAvatarBorderItem> borderItem;
@property (nonatomic) BOOL borderHidden;
@property (nonatomic) BOOL honorHidden;
@property (nonatomic) BOOL disableBorder;

- (void)didShowShoppingToolBarItem;
- (void)didHideShoppingToolBarItem;
- (void)updateWithAvatarURLs:(id)a0;
- (void)didUpdateEcommerceGoods:(BOOL)a0;
- (void)renderUI;
- (void)updateWithBorder:(id)a0 useThumb:(BOOL)a1;
- (void)updateWithBorder:(id)a0;
- (void)updateWithVerified;
- (void)startRotatingAnimation;
- (void).cxx_destruct;
- (void)layoutIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setBorderSize:(struct CGSize { double x0; double x1; })a0;

@end
