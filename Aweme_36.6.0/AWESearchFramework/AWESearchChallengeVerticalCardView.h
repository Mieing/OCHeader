@class UIView, NSString, UIImageView, UIButton, YYLabel, AWESearchCachalotResultContext, AWEChallengeModel, AWEDcmInfoModel, UILabel;
@protocol AWEModernFeedCellContext, AWESearchChallengeVerticalCardViewDelegate;

@interface AWESearchChallengeVerticalCardView : UIView <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) UIImageView *challengeCoverImageView;
@property (retain, nonatomic) UIImageView *hashtagPlaceholderImageView;
@property (retain, nonatomic) YYLabel *hashtagNameLabel;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIButton *shootButton;
@property (retain, nonatomic) UIView *hashtagNameLabelView;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWEDcmInfoModel *dcmInfoModel;
@property (copy, nonatomic) id /* block */ shootCallback;
@property (retain, nonatomic) AWEChallengeModel *challengeModel;
@property (weak, nonatomic) id<AWESearchChallengeVerticalCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (id)identifier;
+ (double)cellHeight;

- (id)enterFrom;
- (void)buttonClicked;
- (void)configWithModel:(id)a0;
- (void)componentPageViewWillAppear:(BOOL)a0;
- (void)componentClicked;
- (void)componentWillDisplay;
- (id)getCurrentSearchId;
- (id)createComposeModelWithModel:(id)a0 extra:(id)a1;
- (void)shootWithChallengeModel:(id)a0 andIndex:(unsigned long long)a1;
- (void)cardClicked;
- (BOOL)isGeneralSearchTopicSchema:(id)a0;
- (void)trackSearchResultClickWith:(id)a0 index:(long long)a1 buttonType:(id)a2 btmID:(id)a3;
- (void)navigateToGeneralSearchTopic:(id)a0;
- (void)navigateToChallengeDetail:(id)a0 challengeModel:(id)a1;
- (void)cardViewWillDisplay:(id)a0;
- (id)shootExtraWithChallengeModel:(id)a0;
- (void)startShotWithChallenge:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)componentView;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
