@interface AWEListenFeedFilterListSectionController : AWEBaseListSectionController

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (double)cellHeight;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)trackListenModelPagePlayListShow:(id)a0;
- (void)trackListenModelPagePlayListClick:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;

@end
