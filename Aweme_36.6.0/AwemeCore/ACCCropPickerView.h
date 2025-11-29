@class NSString, ACCTCECropResource, UICollectionView;
@protocol ACCCropPickerViewDelegate;

@interface ACCCropPickerView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (class, readonly, nonatomic) double cellHeight;
@property (class, readonly, nonatomic) double cellWidth;

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) ACCTCECropResource *cropResource;
@property (weak, nonatomic) id<ACCCropPickerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cropResource:(id)a1;
- (void)updateCropResource:(id)a0 animated:(BOOL)a1;
- (void)scrollToCurrentlItemIfNeeded;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)data;
- (void)setupUI;

@end
