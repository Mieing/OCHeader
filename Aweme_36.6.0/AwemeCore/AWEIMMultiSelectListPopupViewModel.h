@class AWEIMMultiSelectListPopupViewUIConfig, RxCollectionViewDiffableDataSource;
@protocol AWEIMMultiSelectPopupProtocol;

@interface AWEIMMultiSelectListPopupViewModel : NSObject

@property (retain, nonatomic) id<AWEIMMultiSelectPopupProtocol> model;
@property (retain, nonatomic) AWEIMMultiSelectListPopupViewUIConfig *uiConfig;
@property (retain, nonatomic) RxCollectionViewDiffableDataSource *diffableDataSource;

- (id)initWithModel:(id)a0 uiConfig:(id)a1;
- (void)applySnapshotWithAnimatingDifferences:(BOOL)a0;
- (double)maxExposedCellCount;
- (id)itemsWithIndexPaths:(id)a0;
- (unsigned long long)numberOfItems;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)itemTitles;

@end
