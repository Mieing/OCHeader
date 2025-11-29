@class NSArray, __RxDiffableDataSourceOrderedSetI, __RxDataSourceSnapshotter;

@interface RxDiffingStagedChangeset : NSObject

@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *sectionIdentifiers;
@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *itemIdentifiers;
@property (readonly, nonatomic) NSArray *updateItems;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *snapshotter;

+ (id)changesetsWithBeforeDataSourceInfo:(id)a0 afterDataSourceInfo:(id)a1;

- (id)initWithSectionIdentifiers:(id)a0 itemIdentifiers:(id)a1 updateItems:(id)a2 snapshotter:(id)a3;
- (void).cxx_destruct;

@end
