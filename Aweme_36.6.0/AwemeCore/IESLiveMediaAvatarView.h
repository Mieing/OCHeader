@class UIView, NSNumber, UIImageView, UIButton, IESLiveMediaAvatarStore, IESLiveProfileFansButton, UILabel, HTSLiveAmazingBackgroundView;
@protocol IESLiveWebPPlayer;

@interface IESLiveMediaAvatarView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveMediaAvatarStore *store;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIButton *followBtn;
@property (retain, nonatomic) UIButton *nickNameBtn;
@property (nonatomic) BOOL isLandscape;
@property (retain, nonatomic) HTSLiveAmazingBackgroundView *btnContainer;
@property (retain, nonatomic) IESLiveProfileFansButton *fansBtn;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *followMotionPlayer;
@property (nonatomic) BOOL isAnim;
@property (retain, nonatomic) NSNumber *fansClubStatus;
@property (nonatomic) BOOL isFollow;

- (void)updateFollowStatus;
- (void)refreshLayout:(long long)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (BOOL)enableFansClub;
- (void)remakeConstraints;
- (void)p_buildNormalView;
- (void)setupOperationBtn;
- (void)updateFollowButtonWithAnim:(BOOL)a0;
- (id)buttonBackgroundColors;
- (void)p_buildBtnView;
- (struct CGSize { double x0; double x1; })btnSize;
- (void)playFollowAnimWithAnim:(BOOL)a0;
- (void)playVSFollowAnimWithAnim:(BOOL)a0;
- (BOOL)p_shouldHiddenFollowBtn;
- (void)addFollowButtonTarget:(id)a0 action:(SEL)a1;
- (void)addNickNameButtonTarget:(id)a0 action:(SEL)a1;
- (void)addFansClubButtonTarget:(id)a0 action:(SEL)a1;
- (void)updateFansClubStatus:(id)a0 level:(id)a1;
- (void).cxx_destruct;
- (id)viewType;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)buildView;
- (id)createButton;

@end
