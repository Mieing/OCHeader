@class UIImageView, UILabel, UIButton;
@protocol IESLiveInteractUserModel;

@interface IESLiveMediaMultiLinkerProfileView : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) id<IESLiveInteractUserModel> userModel;
@property (nonatomic) long long followStatus;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL clearMode;
@property (retain, nonatomic) UIImageView *closeMicIconView;

- (void)updateWithFollowStatus:(long long)a0;
- (BOOL)isOptimizedPad;
- (id)initWithDIContext:(id)a0 clearMode:(BOOL)a1;
- (void)updateIsMute:(BOOL)a0;
- (void)iPadWithFollow:(BOOL)a0;
- (void)twoPeopleWithFollow:(BOOL)a0;
- (void)multiPeopleWithFollow:(BOOL)a0;
- (void)tapFollowButtton;
- (void).cxx_destruct;
- (void)updateUserInfo:(id)a0;
- (void)layoutUI;

@end
