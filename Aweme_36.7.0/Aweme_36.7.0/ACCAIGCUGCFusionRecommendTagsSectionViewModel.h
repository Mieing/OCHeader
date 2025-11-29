@class ACCAIGCUGCFusionRecommendTagsTracker, NSArray;
@protocol ACCAIGCUGCFusionRecommendTagsSectionViewModelDelegate;

@interface ACCAIGCUGCFusionRecommendTagsSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) long long trackSelectedTagCount;
@property (retain, nonatomic) ACCAIGCUGCFusionRecommendTagsTracker *sectionTracker;
@property (copy, nonatomic) id /* block */ selectUpToLimitBlock;
@property (copy, nonatomic) id /* block */ realSelectTagBlock;
@property (copy, nonatomic) id /* block */ containerDispatchSelectionBlock;
@property (weak, nonatomic) id<ACCAIGCUGCFusionRecommendTagsSectionViewModelDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *cellModelList;

- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)resetAllSelections;
- (void)resetTargetSelectionWithShortWordIdentifiers:(id)a0;
- (BOOL)isRequestPrompt;
- (void)sectionRefreshDidFetchedWithModels:(id)a0 selectedInfos:(id)a1;
- (void).cxx_destruct;

@end
