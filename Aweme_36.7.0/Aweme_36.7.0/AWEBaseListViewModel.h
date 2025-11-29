@class BDVCollectionViewManager, NSArray, NSString;
@protocol AWEBaseListContainerContext;

@interface AWEBaseListViewModel : NSObject <AWEBaseListViewModelOverride>

@property (weak, nonatomic) BDVCollectionViewManager *bdv_visibleManager;
@property (copy, nonatomic) NSArray *sectionViewModelsArray;
@property (nonatomic) BOOL didFinishNetworkRequest;
@property (weak, nonatomic) id<AWEBaseListContainerContext> awelistkit_containerContext;
@property (nonatomic) long long dataState;
@property (copy, nonatomic) NSString *errorMessage;
@property (retain, nonatomic) id listDataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)updateBySectionViewModels:(id)a0;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1;
- (void)removeSectionViewModels:(id)a0 animated:(BOOL)a1;
- (void)appendSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0;
- (void)removeSectionViewModels:(id)a0;
- (void)replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (void)updateBySectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)appendSectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)insertSectionViewModel:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)removeSectionViewModels:(id)a0 animated:(BOOL)a1 sync:(BOOL)a2;
- (void)insertSectionViewModels:(id)a0 atIndexes:(id)a1 animated:(BOOL)a2 sync:(BOOL)a3;
- (void)bdv_replaceBySectionViewModels:(id)a0 sync:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
