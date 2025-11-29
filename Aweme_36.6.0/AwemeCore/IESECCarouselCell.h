@class NSArray, NSString, UICollectionView;
@protocol IESECCarouselCellLayoutProtocol;

@interface IESECCarouselCell : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    Class _cellClass;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL singlePage;
@property (retain, nonatomic) NSArray *realDataSource;
@property (copy, nonatomic) NSString *accessibilityText;
@property (retain, nonatomic) NSArray *dataSource;
@property (copy, nonatomic) id /* block */ didScrollToPageBlock;
@property (weak, nonatomic) id<IESECCarouselCellLayoutProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cycleScroll;
- (id)initWithCellClass:(Class)a0;
- (id)accessibilityLabel;
- (void)showNextPage;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)layoutSubviews;
- (void)_setup;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;

@end
