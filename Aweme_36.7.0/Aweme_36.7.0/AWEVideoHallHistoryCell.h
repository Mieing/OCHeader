@class AWEVideoHallBlockInfo, NSString, UICollectionView, AWELVideoHallTracker;

@interface AWEVideoHallHistoryCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWEVideoHallBlockInfo *blockInfo;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL isShowFooterView;
@property (copy, nonatomic) id /* block */ willDisplayHandler;
@property (copy, nonatomic) id /* block */ historyCellClick;
@property (copy, nonatomic) id /* block */ MoreBtnClick;
@property (retain, nonatomic) AWELVideoHallTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickMoreCellAction;
- (void)configWithBlockInfo:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
