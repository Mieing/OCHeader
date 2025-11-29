@class UIImageView, UILabel, UIView, AWEHPChannelAvatarBreathModel;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWETabBarGeneralAvatarBreathView : UIView

@property (retain, nonatomic) UIView *topImageBackView;
@property (retain, nonatomic) UIImageView *topImageView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UILabel *iconTagLabel;
@property (retain, nonatomic) AWEHPChannelAvatarBreathModel *model;
@property (nonatomic) double avatarSize;

- (double)avatarBackViewWidth;
- (double)avatarBackViewBorderWidth;
- (double)avatarBackViewPadding;
- (void)setupAvatarImageView;
- (void)setupAvatarPendant;
- (void)configAvatar;
- (struct CGSize { double x0; double x1; })topImageBackViewSize;
- (struct CGSize { double x0; double x1; })avatarImageViewSize;
- (void)setupLiveTagLabel;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (double)avatarWidth;

@end
