@class HTSLiveUser, NSString, UIImageView, UILabel, UIButton;
@protocol IESLiveRoomService, IESLiveSubscription;

@interface HTSLivePKUserProfileView : UIView <IESLiveRevenueInteractInnerAction, IESLivePKStateAction>

@property (retain, nonatomic) UILabel *name;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *consecutiveWinLabel;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIImageView *closeMicIconView;
@property (retain, nonatomic) HTSLiveUser *userModel;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (nonatomic) BOOL clearMode;
@property (nonatomic) BOOL showMedalIcon;
@property (copy, nonatomic) id /* block */ didClickProfile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAction;
- (void)updateWithFollowStatus:(long long)a0;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (void)didRevenueInteractPlayStart:(BOOL)a0;
- (void)tapAvatarViewTapped:(id)a0;
- (BOOL)shouldShowMedal;
- (void)showStageMedal;
- (void)cleanStageMeadal;
- (void)addconsecutiveWinViewIfNeed;
- (void)updateConsecutiveWinViewWith:(unsigned long long)a0;
- (void)addViewsWithTraditionalMode;
- (void)updateWithUser:(id)a0 room:(id)a1;
- (double)spacingBetweenNameAndDesc;
- (void)showUserAvatar;
- (void)setupAvatarAccessibilityLabel;
- (id)oppositeInfo;
- (BOOL)needconsecutiveWinView;
- (void)tapFollowButton:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 user:(id)a1 room:(id)a2 withContext:(id)a3 clearMode:(BOOL)a4;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addViews;

@end
