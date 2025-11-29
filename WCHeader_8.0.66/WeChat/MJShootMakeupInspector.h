@class CAGradientLayer, MMUILabel, UICollectionView, NSString, MJMaterialLoadingStatusCoordinator, MMUIButton, MJShootMakeupInspectorViewModel;
@protocol MJShootMakeupInspectorDelegate;

@interface MJShootMakeupInspector : MMUIView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) MJShootMakeupInspectorViewModel *viewModel;
@property (retain, nonatomic) MJMaterialLoadingStatusCoordinator *coordinator;
@property (retain, nonatomic) UICollectionView *makeupCollectionView;
@property (retain, nonatomic) CAGradientLayer *panelBackgroundGradientLayer;
@property (retain, nonatomic) MMUIButton *dismissButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) id<MJShootMakeupInspectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setupViews;
- (void)setupForShowing;
- (void)dismissButtonDidTouchUpInside:(id)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
