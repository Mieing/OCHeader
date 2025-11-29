@class AWERatingView, UIView, AWEPaymentBadgeView, NSString, UIImageView, UIButton, CAGradientLayer, AWEChallengeModel, UILabel;
@protocol AWESearchFilmTVTagViewProtocol;

@interface AWEChallengeDetailAssociatedMediaInfoPanelView : UIView

@property (retain, nonatomic) AWEChallengeModel *challenge;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *viewButtonView;
@property (retain, nonatomic) UILabel *viewButtonLabel;
@property (retain, nonatomic) UIView *mainInfoContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEPaymentBadgeView *paymentBadgeView;
@property (retain, nonatomic) UIView<AWESearchFilmTVTagViewProtocol> *tagView;
@property (retain, nonatomic) UIView *middleInfoContainer;
@property (retain, nonatomic) UILabel *movieNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *subInfoLabel;
@property (retain, nonatomic) UIView *versionsView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) AWERatingView *ratingView;
@property (retain, nonatomic) UILabel *ratingLabel;
@property (retain, nonatomic) UILabel *ratingDetailLabel;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) CAGradientLayer *ratingLabelLayer;
@property (retain, nonatomic) UIButton *billboardButton;
@property (retain, nonatomic) UIImageView *crownImageView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *rankNumberLabel;
@property (retain, nonatomic) UILabel *rankTitleLabel;
@property (retain, nonatomic) UIView *billboardTitleBackgroundView;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) double ratingViewRate;

- (void)viewClicked;
- (void)updateWithChallenge:(id)a0;
- (void)mainInfoContainerClicked;
- (void)showBillboardButton;
- (void)showVersionsTag:(double)a0;
- (void)showRatingLine;
- (id)versionItemView:(id)a0 leftMargin:(double)a1;
- (void)updateRatingLabelCover;
- (void)cacheCurrentWatchAlbum;
- (id)currentlyWatchedEpisodeInfo;
- (void)cacheCurrentWatchEpisode:(id)a0;
- (void)billboardClicked;
- (BOOL)currentAlbumWatched;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
