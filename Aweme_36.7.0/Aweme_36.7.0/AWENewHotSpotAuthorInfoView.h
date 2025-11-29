@class UIView, AWEAccessibilityLabel, AWEAvatarImageView, AWEUserModel, UIImageView, YYLabel, AWENewHotSpotAuthorInfoFrame, UILabel, AWEAliasEditLabel;

@interface AWENewHotSpotAuthorInfoView : UIView

@property (weak, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEAliasEditLabel *authorNameLabel;
@property (weak, nonatomic) AWENewHotSpotAuthorInfoFrame *frameModel;
@property (retain, nonatomic) UIView *sourceContainerView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *sourceArrow;
@property (retain, nonatomic) AWEAvatarImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *commentUserImageView;
@property (retain, nonatomic) AWEAccessibilityLabel *timeLabel;
@property (retain, nonatomic) YYLabel *authenticationInfoLabel;
@property (retain, nonatomic) UIImageView *avatarTagView;
@property (retain, nonatomic) UIView *authorBackgroundView;
@property (copy, nonatomic) id /* block */ avatarImageTappedBlock;
@property (copy, nonatomic) id /* block */ authorNameTappedBlock;
@property (copy, nonatomic) id /* block */ sourceTappedBlock;

- (void)createEditAliasView;
- (BOOL)isCommentCard:(id)a0;
- (void)addGestureRecognizerForEnterFullScreen;
- (id)modifiedUserModelFromLiveRawDataWithAweme:(id)a0;
- (void)authorNameTapped:(id)a0;
- (void)avatarImageTapped:(id)a0;
- (void)didBecomeAccessibilityFocused;
- (void)sourceTapped:(id)a0;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
