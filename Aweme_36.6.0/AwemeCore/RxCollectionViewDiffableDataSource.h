@class NSString, __RxDiffableDataSource;

@interface RxCollectionViewDiffableDataSource : NSObject <UICollectionViewDataSource> {
    __RxDiffableDataSource *_impl;
}

@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)indexPathForItemIdentifier:(id)a0;
- (id)sectionIdentifierForIndex:(long long)a0;
- (id)itemIdentifierForIndexPath:(id)a0;
- (BOOL)_isDiffableDataSource;
- (long long)indexForSectionIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithCollectionView:(id)a0 cellProvider:(id /* block */)a1;
- (id)impl;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)snapshot;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1 completion:(id /* block */)a2;
- (void)applySnapshot:(id)a0 animatingDifferences:(BOOL)a1;

@end
