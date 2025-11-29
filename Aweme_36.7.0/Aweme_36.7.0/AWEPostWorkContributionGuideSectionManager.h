@class NSString, AWEPostWorkContributionGuideSectionModel;

@interface AWEPostWorkContributionGuideSectionManager : AWEUserWorkSectionManager <AWEPostWorkContributionGuideSectionManagerProtocol, AWEUserWorkChangeControllerProtocol>

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *currentUserID;
@property (nonatomic) BOOL showIfHasContributionGuide;
@property (nonatomic) unsigned long long sectionState;
@property (retain, nonatomic) AWEPostWorkContributionGuideSectionModel *sectionNormalGuideModel;
@property (retain, nonatomic) AWEPostWorkContributionGuideSectionModel *sectionTaskCardGuideModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)horizontalSection;
- (void)asyncCheckShowContributionGuideAndAdjustTaskCardMargin;
- (id)placeHolderSection;
- (id)mixCreateTipSection;
- (void)willRefreshForAddAwemes;
- (long long)contributionGuideShowType;
- (void)setContributionGuideShowType:(long long)a0;
- (BOOL)shouldInsertContributionGuideInExtensionArea;
- (void)insertContributionGuideInExtensionArea;
- (BOOL)shouldInsertContributionGuideInHeader;
- (void)insertContributionGuideInHeader;
- (id)contributionGuideModel;
- (void)configContributionGuideCollectionViewCell:(id)a0;
- (void)checkShowContributionGuide;
- (void)adjustTaskCardMarginTopIfNeed;
- (BOOL)allowTaskCardPublish;
- (double)currentSectionHeightAhead;
- (BOOL)shouldShowEmptyPublishTaskCard;
- (id)emptyPublishGuideModel;
- (BOOL)shouldShowTaskCard;
- (id)verticalTaskCardModel;
- (double)screenBottomHeight;
- (void)observerSpecificationTips;
- (void)requestDataCompletionWithReason:(unsigned long long)a0 error:(id)a1 refresh:(BOOL)a2 response:(id)a3;
- (void)checkShowTaskCard;
- (unsigned long long)horizontalSectionState;
- (BOOL)shouldShowPublishGuide;
- (void).cxx_destruct;
- (id)userModel;
- (id)viewModel;
- (void)containerViewDidLoad;
- (double)sectionHeight;

@end
