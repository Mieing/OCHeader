@class AWEAwemeModel, NSString, UIImageView, DUXButton, UILabel, AWEUserModel, UIView;
@protocol AWEVideoDescriptionPanelAuthorViewDelegate;

@interface AWEVideoDescriptionPanelAuthorView : UIView <AWEUserMessage, AWEGuestModeMessage>

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) DUXButton *followBtn;
@property (retain, nonatomic) UIView *circleView;
@property (nonatomic) BOOL isFollowAnimating;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL followBtnHasClicked;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) id<AWEVideoDescriptionPanelAuthorViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithAwemeModel:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)updateAvatarView;
- (void)followAction;
- (void)followBtnClicked;
- (id)themeColorTransformedFrom:(id)a0;
- (void)updateFollowBtn;
- (void)changeToUnfollowStatus:(long long)a0 userID:(id)a1;
- (void)updateUserName;
- (void)guestDidFinishFollowUser:(id)a0 isUnfollow:(BOOL)a1;
- (long long)authorInfoStyle;
- (BOOL)shouldApplyChanges;
- (void)unfollowAction;
- (id)getUnfollowRelationContext;
- (id)getFollowRalationContext;
- (void)trackConcernAction:(BOOL)a0;
- (void)authorInfoClickedByHead:(id)a0;
- (void)authorInfoClickedByName:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)authorName;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
