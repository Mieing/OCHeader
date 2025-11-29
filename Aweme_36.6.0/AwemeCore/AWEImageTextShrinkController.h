@interface AWEImageTextShrinkController : BDMultiContentContainer.BaseContentListController <AWEImageTextShrinkControllerProtocol, BDMultiContentContainer.BaseContentListControllerLifeCycle, AWEAwemeContentControllerProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewChangeBackgroundView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewChangePanelView;
    void /* unknown type, empty encoding */ collectionViewChangePanelCurrentContentView;
    void /* unknown type, empty encoding */ collectionViewChangePanelTopGradientView;
    void /* unknown type, empty encoding */ collectionViewChangePanelBottomGradientView;
    void /* unknown type, empty encoding */ collectionViewChangePanelbottomMaskImageView;
}

@property (nonatomic) BOOL collectionViewFrameEqualSuperView;

- (BOOL)getShrinkState:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;
- (void)updateShrinkState:(BOOL)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 animated:(BOOL)a2 animationDuration:(double)a3;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAwemeContentViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animationDuration:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewInitFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awemeContentViewFrame;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLoad;
- (void)setupCollectionView:(id)a0;

@end
