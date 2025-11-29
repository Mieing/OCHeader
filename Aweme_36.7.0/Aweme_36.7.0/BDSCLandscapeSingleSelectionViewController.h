@class NSString, UICollectionView, UIView, UIButton;
@protocol BDSCControlSettingPanelDelegate;

@interface BDSCLandscapeSingleSelectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, BDSCControlSettingPanelProtocol>

@property (retain, nonatomic) UIButton *maskButton;
@property (retain, nonatomic) UIView *panelView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<BDSCControlSettingPanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismiss:(BOOL)a0 completion:(id /* block */)a1;
- (void)configWithModel:(id)a0;
- (id)dataSourceArray;
- (void)buildSubviews;
- (void)configWithCastSettingOptions:(unsigned long long)a0 exposedOptions:(unsigned long long)a1;
- (void)updateLimitedResolution:(id)a0;
- (BOOL)isSelectedForItem:(id)a0;
- (id)tagArrayAtIndex:(long long)a0;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (void)reloadData;
- (void)dismiss;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (double)itemHeight;
- (void)show:(id)a0 completion:(id /* block */)a1;
- (void)selectItemAtIndex:(long long)a0;

@end
