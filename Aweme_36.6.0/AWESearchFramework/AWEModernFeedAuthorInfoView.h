@class AWEAwemeModel, UILabel, UIView, AWEBillboardLabel, NSString, UIImageView, UIButton, AWEAccessibilityLabel, AWEAliasEditLabel;
@protocol AWEFollowButtonProtocol, AWEFamiliarRelationViewProtocol, AWEAvatarImageViewProtocol;

@interface AWEModernFeedAuthorInfoView : UIView

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAliasEditLabel *authorNameLabel;
@property (retain, nonatomic) UILabel *relationFirstLabel;
@property (retain, nonatomic) UILabel *relationSecondLabel;
@property (retain, nonatomic) UIView<AWEAvatarImageViewProtocol> *avatarImageView;
@property (retain, nonatomic) AWEBillboardLabel *starNameLabel;
@property (retain, nonatomic) UILabel *relationTagLabel;
@property (retain, nonatomic) UILabel *recommendResaonLabel;
@property (retain, nonatomic) UIButton<AWEFollowButtonProtocol> *followBtn;
@property (retain, nonatomic) AWEAccessibilityLabel *insTimeLabel;
@property (retain, nonatomic) UILabel *subTagLabel;
@property (retain, nonatomic) UIImageView *avatarTagView;
@property (retain, nonatomic) UIView<AWEFamiliarRelationViewProtocol> *recommendView;
@property (retain, nonatomic) UIView *authorBackgroundView;
@property (retain, nonatomic) UILabel *cardUpRightTag;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ authorNameTappedBlock;
@property (copy, nonatomic) id /* block */ relationTagTappedBlock;

- (void)createEditAliasView;
- (void)addGestureRecognizerForEnterFullScreen;
- (void)authorNameTapped:(id)a0;
- (void)didBecomeAccessibilityFocused;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void)relationLabelTapped;
- (void)configWithFrame:(id)a0 animated:(BOOL)a1;
- (BOOL)needHideLiveStoryMark;
- (void)goToStarBillboard;
- (void)followButtonPressed:(id)a0;
- (void)trackWithEvent:(id)a0 needStagingFlag:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
