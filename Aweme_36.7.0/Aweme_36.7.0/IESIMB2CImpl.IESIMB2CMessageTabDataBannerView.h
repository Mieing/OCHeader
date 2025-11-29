@class _TtC12IESIMB2CImpl36IESIMB2CMessageTabTopBannerViewModel;

@interface IESIMB2CImpl.IESIMB2CMessageTabDataBannerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ cellViewModels;
    void /* unknown type, empty encoding */ flowLayout;
    void /* unknown type, empty encoding */ collectionViewWidth;
    void /* unknown type, empty encoding */ collectionViewHeight;
    void /* unknown type, empty encoding */ hasTrackerOpenHighlyProspectiveTip;
    void /* unknown type, empty encoding */ $__lazy_storage_$_gradientLayer;
    void /* unknown type, empty encoding */ topStack;
    void /* unknown type, empty encoding */ topRightImageView;
    void /* unknown type, empty encoding */ titleIcon;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ optimizeBtn;
    void /* unknown type, empty encoding */ suggestImageView;
    void /* unknown type, empty encoding */ descStack;
    void /* unknown type, empty encoding */ descLabel;
    void /* unknown type, empty encoding */ infoIcon;
    void /* unknown type, empty encoding */ dataContainerStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionViewStack;
    void /* unknown type, empty encoding */ mainLabel;
    void /* unknown type, empty encoding */ lineView;
    void /* unknown type, empty encoding */ lineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_collectionView;
    void /* unknown type, empty encoding */ dataJumpBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomVerticalStack;
    void /* unknown type, empty encoding */ bottomLineLabel;
    void /* unknown type, empty encoding */ bottomHorizontalStack;
}

@property (nonatomic, retain) _TtC12IESIMB2CImpl36IESIMB2CMessageTabTopBannerViewModel *viewModel;

- (void)didTapCollectionViewStack;
- (void)didTapBottomViewStack;
- (void)didTapInfoBtn;
- (void)didTapOptBtn;
- (void)updateBackgroudColor;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
