@class AWESearchUserFollowButton, AWEGeneralSearchModel, UIImageView, AWESearchUser, UIView, UILabel, AWEBillboardLabel;
@protocol AWESearchTopUserDelegate, AWELiveStoryBrowserTagViewProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWEGeneralTopUserView : UIView

@property (retain, nonatomic) AWESearchUser *topUserModel;
@property (retain, nonatomic) UIView *userView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIImageView *verifyImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEBillboardLabel *starNameLabel;
@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) AWESearchUserFollowButton *followButton;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIImageView *linkImage;
@property (retain, nonatomic) UIView *linkView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView<AWELiveStoryBrowserTagViewProtocol> *tagView;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (weak, nonatomic) id<AWESearchTopUserDelegate> delegate;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *fansLabel;

+ (double)heightForModel:(id)a0;

- (void)updateTheme:(unsigned long long)a0;
- (void)configureHeaderView;
- (void)trackAdShow;
- (void)updateFollowStatus:(long long)a0;
- (void)onFollowButtonTapped;
- (void)addHightlightWithAttributeString:(id)a0 prefixLength:(long long)a1 positions:(id)a2;
- (void)updateFollowTheme:(unsigned long long)a0;
- (void)configureUserViewWithSearchMerchandiseModel:(id)a0;
- (void)updateSubviewWithAdEndorseProductCard;
- (void)configureUserView:(id)a0;
- (void)configureUserViewWithSearchModel:(id)a0;
- (void)addHightlightWithAttributeString:(id)a0 prefixLength:(long long)a1 positions:(id)a2 unHighlightTextColor:(id)a3;
- (id)fansLabelPrefix;
- (void)configureLinkDataWithSearchModel:(id)a0;
- (void)updateBillboardLabelThemeIfNeeded:(unsigned long long)a0;
- (void)setupFollowTitleColor:(id)a0;
- (void)onAvatarImageTapped;
- (void)onLinkViewTapped;
- (void)configureLinkViewIfNeeded;
- (void)onUserViewTapped;
- (void)onArrowButtonTapped;
- (void).cxx_destruct;
- (id)init;

@end
