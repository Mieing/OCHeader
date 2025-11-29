@class WCFinderHeadImageView, UIView, MMFinderLiveConnectMicUser;

@interface MMFinderLiveCDNPlayerSingleAudioMicUserView : UIView

@property (retain, nonatomic) MMFinderLiveConnectMicUser *userInfo;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) WCFinderHeadImageView *backgroundHeadImageView;
@property (retain, nonatomic) UIView *audioUserBlurView;
@property (nonatomic) BOOL hideAudioMicUserAvatar;

- (void)updateHeadImageView;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)showWithConnectMicUserInfo:(id)a0;
- (void)clearAndHide;
- (void)updateUserAvatarAlpha:(double)a0;
- (void).cxx_destruct;

@end
