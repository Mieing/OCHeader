@class NSString;

@interface ACCVideoEditMineStickerTabViewController : ACCVideoEditStickerTabViewController <UICollectionViewDelegateFlowLayout, ACCUploadStickerCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldResponseLongPressGesture;
- (void)beginLongPressAtCollectionCell:(id)a0;
- (void)endLongPressAtCollectionCell:(id)a0;
- (BOOL)enablePackUpWith:(long long)a0;
- (id)prepareIndexPathsInsertedAtSection:(long long)a0 categoryModel:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)deleteStickerAtIndexPath:(id)a0;

@end
