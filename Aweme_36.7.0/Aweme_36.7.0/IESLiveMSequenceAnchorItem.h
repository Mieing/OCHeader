@class HTSLiveAvatarImageView, HTSLiveUser, HTSLiveMSequenceStore, UILabel, HTSLiveButton, UIView;
@protocol IESLiveAnchorToolbarRouter;

@interface IESLiveMSequenceAnchorItem : UIView

@property (retain, nonatomic) HTSLiveMSequenceStore *store;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSLiveButton *followBtn;
@property (retain, nonatomic) HTSLiveButton *fansBtn;
@property (weak, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<IESLiveAnchorToolbarRouter> anchorToolbarRouter;

- (void)didSetAttachingDIContext;
- (void)followButtonClicked:(id)a0;
- (void)setupTitleContainer;
- (void)setupBgColor;
- (void)setupFollowBtn;
- (void)tapViewTapped:(id)a0;
- (void)fansButtonClicked:(id)a0;
- (void)remakeLayoutConstraints;
- (void)updateUserModel:(id)a0;
- (void)followStatusDidChange;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)dealloc;
- (void)setupAvatar;

@end
