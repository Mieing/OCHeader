@class NSString, AWEUserModel, UIImageView, UIButton, AWELiveSearchModel, AWESearchAllManager, AWESearchUserFollowButton, AWELiveAnnouncement, UILabel, NSDictionary;
@protocol AWEHttpTask;

@interface AWESearchLiveAppointmentUserInfoView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *avatarCertView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *avatarTitleButton;
@property (retain, nonatomic) AWESearchUserFollowButton *followButton;
@property (retain, nonatomic) AWELiveSearchModel *liveSearchModel;
@property (readonly, nonatomic) AWELiveAnnouncement *liveAnnouncement;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWESearchAllManager *manager;
@property (weak, nonatomic) id<AWEHttpTask> task;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchId;
@property (nonatomic) long long rank;
@property (retain, nonatomic) NSDictionary *logExtraDict;

+ (double)heightForModel:(id)a0 containerWidth:(double)a1;

- (void)followButtonClicked:(id)a0;
- (void)unfollowUser;
- (void)followUser;
- (void)updateWithFollowStatus:(long long)a0 followerStatus:(long long)a1;
- (BOOL)hasShowAppointmentButton;
- (void)trackClickEventWithButtonType:(id)a0;
- (void)trackLiveSdkLogWithEventName:(id)a0;
- (void)trackClickEventWithButtonType:(id)a0 withAdditionalParam:(id)a1;
- (BOOL)showFollowButtonOrAppointment;
- (void)updateWithAppointmentStatus:(int)a0;
- (void)showFollowButtonBubbleIfNeeded;
- (void)callAttentionButtonWithTitle:(id)a0 icon:(id)a1 padding:(double)a2 requiresAttention:(BOOL)a3;
- (void)avatarClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
