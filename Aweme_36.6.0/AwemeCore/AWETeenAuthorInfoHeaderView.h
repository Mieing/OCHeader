@class UIControl, AWEUserModel, UIImageView, AWEBillboardLabel, UIView, UILabel, UIButton;

@interface AWETeenAuthorInfoHeaderView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIView *avatarMaskView;
@property (retain, nonatomic) UIView *userInforContainerView;
@property (retain, nonatomic) AWEBillboardLabel *authorNameLabel;
@property (retain, nonatomic) UILabel *subscribeNumLabel;
@property (retain, nonatomic) UILabel *subscribeNumDescLabel;
@property (retain, nonatomic) UIControl *workNumControl;
@property (retain, nonatomic) UILabel *workNumLabel;
@property (retain, nonatomic) UILabel *workNumDescLabel;
@property (retain, nonatomic) UIImageView *workRemindImageView;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UILabel *verifyInfoLabel;
@property (retain, nonatomic) UILabel *xiguaLabel;
@property (retain, nonatomic) UIButton *subscribeButton;
@property (copy, nonatomic) id /* block */ clickSubscribeAction;
@property (retain, nonatomic) AWEUserModel *user;

- (void)clickAvatar;
- (void)updateSubscribeStatus:(long long)a0 subscribedCount:(long long)a1;
- (void)p_renderXiguaAuthorUI;
- (void)p_updateVerifyUI;
- (void)clickWorkNumControl;
- (void)clickSubscribeButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
