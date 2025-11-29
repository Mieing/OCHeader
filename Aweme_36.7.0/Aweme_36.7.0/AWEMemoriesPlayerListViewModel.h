@class NSArray, NSIndexPath, NSString;

@interface AWEMemoriesPlayerListViewModel : AWEBaseListViewModel <AWEFeedPreloadManagerDelegate>

@property (retain, nonatomic) NSArray *authorizationViewModels;
@property (retain, nonatomic) NSArray *themesViewModels;
@property (retain, nonatomic) NSArray *specificViewModels;
@property (copy, nonatomic) NSArray *tileModelsArray;
@property (nonatomic) struct CGPoint { double x; double y; } playerContentOffSet;
@property (nonatomic) BOOL isDragging;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) long long awemeCount;
@property (nonatomic) long long localCount;
@property (nonatomic) long long memoriesRecallCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendWithThemesPlayerModels:(id)a0;
- (void)reloadListWithMemoriesPlayerModels:(id)a0;
- (void)appendListWithMemoriesPlayerModels:(id)a0;
- (void)appendAuthorizationWithMemoriesPlayerModels:(id)a0;
- (void)removeAuthorizationModels;
- (void)appendListWithSpecificMemoriesPlayerModels:(id)a0;
- (id)sectionHandlerClassArray;
- (void)recordCountWithClass:(Class)a0;
- (void).cxx_destruct;

@end
