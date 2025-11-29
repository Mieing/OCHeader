@class UICollectionView, NSString, UIView;
@protocol DVEPickerEffectUIConfigurationProtocol, DVEPickerEffectErrorViewProtocol, DVEPickerCategoryModel, DVEPickerEffectOverlayProtocol, DVEPickerCollectionViewCellDelegate;

@interface DVEPickerCollectionViewCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UIView<DVEPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<DVEPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (retain, nonatomic) UIView<DVEPickerEffectOverlayProtocol> *emptyView;
@property (retain, nonatomic) id<DVEPickerEffectUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) UICollectionView *pickerCollectionView;
@property (retain, nonatomic) id<DVEPickerCategoryModel> categoryModel;
@property (weak, nonatomic) id<DVEPickerCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)hideErrorView;
- (void)showEmptyView;
- (void)updateUIConfig:(id)a0;
- (void)hideEmptyView;
- (void)updateIconImageIfNeededWithSticker:(id)a0 forCell:(id)a1 atIndexPath:(id)a2;
- (void)onErrorTap;
- (void)reloadData;
- (void).cxx_destruct;
- (void)updateStatus:(unsigned long long)a0;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoadingView;
- (void)showErrorView;
- (void)hideLoadingView;

@end
