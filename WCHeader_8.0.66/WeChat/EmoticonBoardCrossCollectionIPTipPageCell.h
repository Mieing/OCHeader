@class NSString;
@protocol EmoticonBoardCrossCollectionIPTipPageDelegate;

@interface EmoticonBoardCrossCollectionIPTipPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardIPMergeTipViewDelegate, UICollectionViewDataSource>

@property (nonatomic) double bottomInset;
@property (weak, nonatomic) id<EmoticonBoardCrossCollectionIPTipPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSectionInfo:(id)a0;
- (void)reloadViews;
- (void)layoutSubviews;
- (void)updateLayout;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)onTapConfirmMergeButton;

@end
