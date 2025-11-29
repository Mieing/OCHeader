@class NSArray, UICollectionView, AWEAwemeModel, NSString, NSMutableArray, YYLabel;

@interface AWEPlayInteractionVideoAbstractView : UIControl <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) double labelHeight;
@property (nonatomic) double labelWidth;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableArray *dataAttStrArray;
@property (copy, nonatomic) NSArray *dataArray;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) id /* block */ clickVideoAbstractBtnBlock;
@property (copy, nonatomic) id /* block */ scrollViewDidEndDraggingBlock;
@property (nonatomic) long long selecteIndex;
@property (readonly, nonatomic) double offsetX;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBtnWithPlayTime:(double)a0 completion:(id /* block */)a1;
- (void)updateWithModel:(id)a0 LabelWidth:(double)a1 hasClicked:(BOOL)a2;
- (id)formattedJumpTimeForTime:(id)a0;
- (long long)showRows;
- (BOOL)isFirstCellStyle;
- (void)scrollToOffsetWith:(double)a0 selectedIndex:(long long)a1;
- (id)createAttributedStringWithString:(id)a0 jumpTime:(id)a1 isSection:(BOOL)a2;
- (BOOL)isLongText:(id)a0 width:(double)a1;
- (id)truncationTokenString;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)cellWidth;
- (void)setupUI;
- (double)getHeight;

@end
