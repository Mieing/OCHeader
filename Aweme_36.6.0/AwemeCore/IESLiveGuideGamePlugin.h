@class IESLiveGuideContainerContext;

@interface IESLiveGuideGamePlugin : IESLiveContainerBasePlugin

@property (retain, nonatomic) IESLiveGuideContainerContext *containerContext;

- (BOOL)shouldUseCategoryOptimizeAB;
- (id)getGameCategoryNodeWithDict:(id)a0;
- (void)didLoad:(id)a0;
- (id)fetchLastGameCategory:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
