@class NSString;

@interface AWECollectionViewDelegateProxy : AWEDelegateProxy <UICollectionViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
