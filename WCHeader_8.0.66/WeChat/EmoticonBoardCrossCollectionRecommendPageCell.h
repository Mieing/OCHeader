@class NSString;
@protocol EmoticonBoardCrossCollectionRecommendPageDelegate;

@interface EmoticonBoardCrossCollectionRecommendPageCell : EmoticonBoardCrossCollectionBasePageCell <EmoticonBoardRecommendViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) id<EmoticonBoardCrossCollectionRecommendPageDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configCollectionViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSectionInfo:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)onEmoticonBoardRecommendViewTapWithPid:(id)a0;

@end
