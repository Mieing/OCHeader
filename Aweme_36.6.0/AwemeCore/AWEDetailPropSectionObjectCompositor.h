@class NSArray;

@interface AWEDetailPropSectionObjectCompositor : NSObject

@property (retain, nonatomic) NSArray *skeletonSectionObjects;

- (void)p_safeAddObject:(id)a0 toArray:(id)a1;
- (void)p_addHeaderInfoToArray:(id)a0 viewModel:(id)a1;
- (void)p_addWelfareToArray:(id)a0 viewModel:(id)a1;
- (void)p_addCommerceDescriptionToArray:(id)a0 viewModel:(id)a1;
- (void)p_addChallengeToArray:(id)a0 viewModel:(id)a1;
- (void)p_addTaskLiteToArray:(id)a0 viewModel:(id)a1;
- (void)p_addLinkToArray:(id)a0 viewModel:(id)a1;
- (void)p_addAILoraDetailPageToArray:(id)a0 viewModel:(id)a1;
- (void)p_addVerifiedUserToArray:(id)a0 viewModel:(id)a1;
- (void)p_addPropRankingToArray:(id)a0 viewModel:(id)a1;
- (void)p_addAwemeListToArray:(id)a0 viewModel:(id)a1;
- (void)handleItemsInteractionWithArray:(id)a0 viewModel:(id)a1;
- (BOOL)lastObjectIsVerifiedUserObject:(id)a0;
- (BOOL)lastObjectIsLinkObject:(id)a0;
- (id)compositeSectionObjectsWithViewModel:(id)a0;
- (id)compositeSkeletonSectionObjectsWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
