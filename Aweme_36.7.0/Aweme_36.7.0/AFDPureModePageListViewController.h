@interface AFDPureModePageListViewController : AWEBaseListViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_containerContext;
    void /* unknown type, empty encoding */ scrollDragTimeStamp;
    void /* unknown type, empty encoding */ lastWidth;
    void /* unknown type, empty encoding */ lastHeight;
}

+ (Class)viewModelClass;
+ (Class)collectionViewClass;

- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (id)initWithCoder:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)setupCollectionView:(id)a0;

@end
