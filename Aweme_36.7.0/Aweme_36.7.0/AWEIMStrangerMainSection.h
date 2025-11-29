@class NSString, NSMutableArray;

@interface AWEIMStrangerMainSection : NSObject <AWEIMBaseCollectionViewSessionProtocol>

@property (retain) NSMutableArray *viewModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mapCellClassToViewModel;
- (struct CGSize { double x0; double x1; })awe_collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (double)awe_collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (double)awe_collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
