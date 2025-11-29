@class UIView, AWEBillboardLabel, AWEDiscoverDAccessibilityLabel, AWEChallengeStarBillBoardLabel, UIImageView, AWECollectionButton, AWEUserCountDescView, CAGradientLayer, YYLabel, AWEChallengeModel, UIButton;

@interface AWEChallengeDetailHeaderBasicInfoContainerView : UIView

@property (retain, nonatomic) AWEDiscoverDAccessibilityLabel *challengeNameLabel;
@property (retain, nonatomic) UIImageView *challengeImageView;
@property (retain, nonatomic) AWEBillboardLabel *hotHashtagLabel;
@property (retain, nonatomic) AWEChallengeStarBillBoardLabel *starBillBoardLabel;
@property (retain, nonatomic) YYLabel *authorNameNewLabel;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (retain, nonatomic) YYLabel *hotAttachmentLabel;
@property (retain, nonatomic) CAGradientLayer *tagBackgroundLayer;
@property (retain, nonatomic) UIImageView *nameLabelArrowImageView;
@property (retain, nonatomic) UIView *loadingImageView;
@property (retain, nonatomic) UIView *loadingNameLabel;
@property (retain, nonatomic) UIView *loadingDescView;
@property (retain, nonatomic) AWEUserCountDescView *userCountView;
@property (retain, nonatomic) AWEChallengeModel *model;
@property (nonatomic) BOOL adjustOnce;
@property (retain, nonatomic) AWECollectionButton *collectionButton;
@property (retain, nonatomic) UIButton *transferButton;
@property (nonatomic) BOOL isHalfScreen;
@property (nonatomic) BOOL isNewLayoutUI;
@property (nonatomic) BOOL isCommonChallenge;

- (void)awe_themeReload;
- (void)hideLoading;
- (id)rankAttributedTitle;
- (BOOL)shouldUseCommerceNewStyle;
- (void)updateChallengeNameLabelWithName:(id)a0;
- (BOOL)shouldShowAuthorName;
- (void)updateAuthorNameNewLabel;
- (void)setupCommerceUI;
- (void)updateChallengeImageWithProfileURL:(id)a0;
- (BOOL)isNewLayoutV1;
- (void)layoutUserCountView;
- (void)layoutButtonsWithModel:(id)a0 underView:(id)a1 sendTrackEvent:(BOOL)a2;
- (void)layoutFavoriteButton;
- (void)layoutButtonsWhenHasTransferButtonUnderView:(id)a0;
- (BOOL)isEnhanceFavoriteButton;
- (BOOL)isStarChallengeBillboard;
- (BOOL)isNormalChallengeBillboard;
- (BOOL)shouldAddHotTagNewLineWithTitle:(id)a0 attachmentWidth:(double)a1;
- (double)challengeNamePreferredMaxLayoutWidth;
- (BOOL)hasCommerceUserData;
- (BOOL)hasVSUserData;
- (BOOL)hasStarUserData;
- (void)updateTagLabelWithName:(id)a0;
- (void)goToHotSearch;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;
- (void)showLoading;

@end
