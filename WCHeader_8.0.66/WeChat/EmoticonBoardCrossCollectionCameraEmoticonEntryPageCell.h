@class NSString;
@protocol EmoticonBoardCrossCollectionCameraEmoticonEntryPageDelegate;

@interface EmoticonBoardCrossCollectionCameraEmoticonEntryPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardCameraEmoticonEntryViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) id<EmoticonBoardCrossCollectionCameraEmoticonEntryPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)onTapCameraEmoticonEntryViewCreateButton;

@end
