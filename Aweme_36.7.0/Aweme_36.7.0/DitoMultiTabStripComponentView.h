@class NSString, UICollectionView, DitoMultiTabDataModel, UIView, DitoMultiTabStripComponentViewModel;

@interface DitoMultiTabStripComponentView : DitoComponentView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, DitoMultiTabDelegateProtocol>

@property (weak, nonatomic) DitoMultiTabStripComponentViewModel *viewModel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *animationIndexLineView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } startFrame;
@property (nonatomic) double startContentOffset;
@property (retain, nonatomic) DitoMultiTabDataModel *startModel;
@property (nonatomic) BOOL isScrollingByTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 willMoveToTabModel:(id)a1 fromTabModel:(id)a2;
- (void)DitoMultiTabContainerDidScroll:(id)a0;
- (void)DitoMultiTabContainer:(id)a0 didMoveToTabModel:(id)a1;
- (long long)stripCount;
- (id)cellForTabModel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateChangeFrameFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withPercent:(double)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
