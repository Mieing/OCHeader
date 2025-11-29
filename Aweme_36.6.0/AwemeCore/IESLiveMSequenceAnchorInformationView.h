@class HTSLiveAvatarImageView, HTSLiveUser, HTSLiveMSequenceStore, UILabel, HTSLiveButton;

@interface IESLiveMSequenceAnchorInformationView : UIView

@property (retain, nonatomic) HTSLiveMSequenceStore *store;
@property (retain, nonatomic) HTSLiveUser *user;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HTSLiveButton *followBtn;
@property (retain, nonatomic) HTSLiveButton *fansBtn;
@property (nonatomic) unsigned long long anchorLayoutType;

- (void)followButtonClicked:(id)a0;
- (void)updateLayoutType:(unsigned long long)a0;
- (void)setupFollowBtn;
- (void)tapViewTapped:(id)a0;
- (void)fansButtonClicked:(id)a0;
- (void)remakeLayoutConstraints;
- (void)updateUserModel:(id)a0;
- (void)followStatusDidChange;
- (id)initWithStore:(id)a0 anchorLayoutType:(unsigned long long)a1 diContext:(id)a2;
- (double)informationViewWidth;
- (void).cxx_destruct;
- (void)setupViews;

@end
