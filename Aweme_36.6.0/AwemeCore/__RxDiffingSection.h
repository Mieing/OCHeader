@class __RxDiffableDataSourceOrderedSetI, __RxDataSourceSnapshotter;

@interface __RxDiffingSection : NSObject

@property (readonly, nonatomic) id sectionIdentifier;
@property (readonly, nonatomic) __RxDiffableDataSourceOrderedSetI *itemIdentifiers;
@property (readonly, nonatomic) __RxDataSourceSnapshotter *snapshotter;

- (id)initWithSectionIdentifier:(id)a0 itemIdentifiers:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
