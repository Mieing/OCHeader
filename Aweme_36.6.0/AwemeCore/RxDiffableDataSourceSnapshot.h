@class NSArray, __RxDiffableDataSourceSnapshot;

@interface RxDiffableDataSourceSnapshot : NSObject <NSCopying> {
    __RxDiffableDataSourceSnapshot *_impl;
}

@property (readonly, nonatomic) NSArray *itemIdentifiers;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) NSArray *sectionIdentifiers;

- (id)itemIdentifiersInSectionWithIdentifier:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 beforeItemWithIdentifier:(id)a1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 afterSectionWithIdentifier:(id)a1;
- (void)insertItemsWithIdentifiers:(id)a0 afterItemWithIdentifier:(id)a1;
- (id)indexPathForItemIdentifier:(id)a0;
- (void)insertSectionsWithIdentifiers:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (long long)numberOfItemsInSection:(id)a0;
- (void)reloadSectionsWithIdentifiers:(id)a0;
- (void)appendItemsWithIdentifiers:(id)a0;
- (void)insertItemsWithIdentifiers:(id)a0 beforeItemWithIdentifier:(id)a1;
- (void)deleteItemsWithIdentifiers:(id)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (void)moveItemWithIdentifier:(id)a0 afterItemWithIdentifier:(id)a1;
- (void).cxx_destruct;
- (long long)indexOfSectionIdentifier:(id)a0;
- (void)appendSectionsWithIdentifiers:(id)a0;
- (void)deleteSectionsWithIdentifiers:(id)a0;
- (long long)indexOfItemIdentifier:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 beforeSectionWithIdentifier:(id)a1;
- (void)reloadItemsWithIdentifiers:(id)a0;
- (void)moveSectionWithIdentifier:(id)a0 afterSectionWithIdentifier:(id)a1;
- (id)impl;
- (id)description;
- (id)init;
- (void)appendItemsWithIdentifiers:(id)a0 intoSectionWithIdentifier:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)deleteAllItems;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
