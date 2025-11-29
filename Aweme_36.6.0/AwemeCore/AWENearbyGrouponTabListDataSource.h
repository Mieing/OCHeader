@class NSArray, NSDictionary, NSString;

@interface AWENearbyGrouponTabListDataSource : NSObject <UICollectionViewDataSource>

@property (retain, nonatomic) NSArray *tabLists;
@property (retain, nonatomic) NSDictionary *tableDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getPageVCTabIDWithIndex:(long long)a0;
- (void)updateTableDict:(id)a0;
- (void)updateTableList:(id)a0;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
