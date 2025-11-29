@class UIPageControl, NSArray, UICollectionView, NSString;

@interface WNMultiImagesCollectionView : UIView <UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    double m_width;
}

@property (retain, nonatomic) NSArray *viewSource;
@property (retain, nonatomic) UIPageControl *pageCtrl;
@property (nonatomic) unsigned long long currentPage;
@property (retain, nonatomic) UICollectionView *imageCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewDataSource:(id)a0 width:(double)a1 currentSelectIndex:(unsigned long long)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andViewDataSouce:(id)a1 currentSelectIndex:(unsigned long long)a2;
- (void)initSubView;
- (void)changeViewDataSource:(id)a0 currentSelectIndex:(unsigned long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;

@end
