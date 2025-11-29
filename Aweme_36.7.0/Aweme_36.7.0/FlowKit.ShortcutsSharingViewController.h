@interface FlowKit.ShortcutsSharingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageControl;
    void /* unknown type, empty encoding */ $__lazy_storage_$_items;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navigationBar;
    void /* unknown type, empty encoding */ extraTrackParams;
}

- (id)flow_trackParametersWith:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
