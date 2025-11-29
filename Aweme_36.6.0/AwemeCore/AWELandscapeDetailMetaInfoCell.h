@class AWELandscapePageContext, UIImageView, AWEAwemeModel, UILabel, DUXButton;
@protocol AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeDetailMetaInfoCell : UICollectionViewCell

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWELandscapePageContext *context;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) double descriptionLabelHeight;
@property (nonatomic) BOOL shouldShowExpandedImage;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *xiguaIcon;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) DUXButton *followButton;
@property (retain, nonatomic) UIImageView *expandedImageView;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> splitScreenContainer;

+ (double)descriptionLabelHeightWithModel:(id)a0 width:(double)a1 isExpanded:(BOOL)a2 context:(id)a3;
+ (double)calculateMetaInfoCellHeightWithModel:(id)a0 width:(double)a1 isExpanded:(BOOL)a2 context:(id)a3;
+ (id)attrTitleWithModel:(id)a0 context:(id)a1;
+ (double)descriptionLineHeight;
+ (id)titleWithModel:(id)a0 context:(id)a1;
+ (double)calculateDescriptionHeightWithString:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })defaultSizeWithModel:(id)a0 width:(double)a1 context:(id)a2 expanded:(BOOL)a3;
+ (id)descriptionLabelFont;

- (void)onUserTapped;
- (void)updateAvatarImage;
- (void)updateNicknameLabel;
- (void)updateFollowButton;
- (void)updateExpandedImageView;
- (void)updateDescriptionLabel;
- (void)updatePublishTimeLabel;
- (BOOL)checkShouldShowExpandedImage;
- (double)calculateMetaInfoCellWidth;
- (void)updateUIByData;
- (BOOL)canShowFollowButton;
- (id)currentExpandedImage;
- (void)trackClickTitle;
- (void)onFollowButtonTapped;
- (void)expandViewDidClick;
- (void)configWithAwemeModel:(id)a0 context:(id)a1 expanded:(BOOL)a2;
- (struct CGSize { double x0; double x1; })cellSizeWithWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentUser;
- (void)setupUI;

@end
