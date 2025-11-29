@class IESLivePlaybackUserProfileTitleView, IESLivePlayBackOwnerContainerView, NSDate, UIView, UILabel, IESLivePlaybackUserProfileStore;

@interface IESLivePlaybackUserProfileFragment : IESLivePlaybackComponent

@property (retain, nonatomic) IESLivePlaybackUserProfileStore *store;
@property (retain, nonatomic) IESLivePlaybackUserProfileTitleView *profileView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *pageViewCountLabel;
@property (retain, nonatomic) IESLivePlayBackOwnerContainerView *ownerContainerView;
@property (retain, nonatomic) NSDate *lastShowDate;
@property (nonatomic) BOOL isFollow;

- (void)componentBindService;
- (void)componentOrientationChanged:(long long)a0;
- (void)componentDidMount;
- (void)updateFollowStatus:(BOOL)a0;
- (void)followButtonClick:(id)a0;
- (void)didUpdatePlaybackEpisode:(id)a0;
- (void)streamChangedWithEpisode:(id)a0;
- (void)showProfileCard;
- (void)addOwnerContainerViewElement;
- (void)updateProfileViewWithEpisode:(id)a0;
- (BOOL)hasAuthenticationIconImage;
- (id)authenticationIconImage;
- (void)showUser:(id)a0 secUserId:(id)a1;
- (void)showProfileCardWithUser:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
