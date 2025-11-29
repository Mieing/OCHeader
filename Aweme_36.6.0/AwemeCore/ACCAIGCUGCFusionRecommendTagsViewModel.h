@class ACCAIGCUGCFusionRecommendTagsSectionViewModel, NSString, ACCAIGCUGCFusionRecommendTagsTracker, ACCAIGCUGCFusionRecommendTagsDataContext;
@protocol ACCAIGCUGCFusionRecommendTagsEventDelegate;

@interface ACCAIGCUGCFusionRecommendTagsViewModel : AWEBaseListViewModel <ACCAIGCUGCFusionRecommendTagsSectionViewModelDelegate>

@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsDataContext *dataContext;
@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsTracker *tracker;
@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsSectionViewModel *tagsSectionViewModel;
@property (weak, nonatomic) id<ACCAIGCUGCFusionRecommendTagsEventDelegate> eventDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (BOOL)isRequestAIAutoPrompt;
- (void)refreshRecommendTagsWithType:(long long)a0 creationModel:(id)a1;
- (void)resetAllSelections;
- (void)resetTargetSelectionWithShortWordIdentifiers:(id)a0;
- (void)syncPromptSelectedInfos;
- (void)fetchListDataCompletionWithWordList:(id)a0;
- (void)updateToCollapsedStyle;
- (void)updateToNormalStyle;
- (BOOL)isRequestPrompt;
- (void)containerDispatchSelectionWithRecommendWord:(id)a0 isSelected:(BOOL)a1;
- (void)fetchListDataWithType:(long long)a0 modelId:(id)a1 originalImageResourceJson:(id)a2 resourceType:(id)a3;
- (id)buildOriginalImageAigcResourceInfoWithModel:(id)a0;
- (void)rearrangeDataSourceAfterFetchWithModelsArray:(id)a0;
- (void)reloadWithBackupRecommendWords;
- (void).cxx_destruct;

@end
