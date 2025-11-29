@interface AWEInteractionElementPopover : UIView <CAAnimationDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UICollectionViewDataSource, AWEInteractionElementPopoverProtocol> {
    void /* unknown type, empty encoding */ parentView;
    void /* unknown type, empty encoding */ bgView;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ showAnimationKey;
    void /* unknown type, empty encoding */ maskShowAnimationKey;
    void /* unknown type, empty encoding */ hideAnimationKey;
    void /* unknown type, empty encoding */ maskHideAnimationKey;
    void /* unknown type, empty encoding */ popoverAnimationKey;
    void /* unknown type, empty encoding */ contentAnchorPoint;
    void /* unknown type, empty encoding */ getFocusBlock;
    void /* unknown type, empty encoding */ loseFocusBlock;
    void /* unknown type, empty encoding */ dismissBlock;
    void /* unknown type, empty encoding */ isDismissAnimating;
    void /* unknown type, empty encoding */ isLosingFocus;
    void /* unknown type, empty encoding */ autoHideTimer;
    void /* unknown type, empty encoding */ currentFocusIndex;
    void /* unknown type, empty encoding */ snapShotImage;
    void /* unknown type, empty encoding */ eventDidOccur;
    void /* unknown type, empty encoding */ weakViews;
    void /* unknown type, empty encoding */ alighView;
    void /* unknown type, empty encoding */ interactionContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_longPressGestureRecognizer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_coverView;
}

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleLongPressWithGes:(id)a0;
- (void)willResignActiveNotification;
- (void)showWithContext:(id)a0 target:(id)a1 alignView:(id)a2 interactionContainer:(id)a3 didGetFocus:(id /* block */)a4 didLoseFocus:(id /* block */)a5 didDismiss:(id /* block */)a6;
- (void).cxx_destruct;
- (void)remove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
