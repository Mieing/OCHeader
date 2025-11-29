@class UIView, AWEAliasEditLabel, AWEAwemeModel, UILabel, NSString, UIImageView, AWEAccessibilityLabel, AFDNewSchoolStoryFeedCellAvatarImageView;

@interface AFDNewSchoolStoryFeedCellAuthorView : UIView

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAliasEditLabel *authorNameLabel;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellAvatarImageView *avatarImageView;
@property (retain, nonatomic) AWEAccessibilityLabel *insTimeLabel;
@property (retain, nonatomic) UILabel *subTagLabel;
@property (retain, nonatomic) UIImageView *avatarTagView;
@property (retain, nonatomic) UIView *authorBackgroundView;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) id /* block */ authorNameTappedBlock;

- (void)createEditAliasView;
- (void)addGestureRecognizerForEnterFullScreen;
- (void)authorNameTapped:(id)a0;
- (void)didBecomeAccessibilityFocused;
- (void)configWithFrame:(id)a0;
- (void)updateLayoutWithFrame:(id)a0;
- (void)configWithFrame:(id)a0 animated:(BOOL)a1;
- (void)trackWithEvent:(id)a0 needStagingFlag:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
