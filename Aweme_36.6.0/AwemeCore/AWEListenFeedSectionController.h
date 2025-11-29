@class AWEListenFeedContext;

@interface AWEListenFeedSectionController : AWEBaseListSectionController

@property (nonatomic) BOOL firstCellDismissed;
@property (retain, nonatomic) AWEListenFeedContext *context;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)uploadListenModeProgressIfNeedWithModel:(id)a0;
- (void)uploadSccondPageProgressIfNeedWithModel:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBackgroundColor;
- (double)minimumLineSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
