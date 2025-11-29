@class AWEStickerPickerFootView, NSString, UICollectionView, UIView;
@protocol AWEStickerPickerCollectionViewCellDelegate, AWEStickerPickerEffectUIConfigurationProtocol, AWEStickerPickerEffectErrorViewProtocol, AWEStickerPickerEffectOverlayProtocol, ACCGenericEffectCategoryModel;

@interface AWEStickerPickerCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, AWEStickerPickerStickerCellAppearanceDelegate>

@property (class, retain, nonatomic) Class stickerCellClass;

@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (retain, nonatomic) UIView<AWEStickerPickerEffectOverlayProtocol> *emptyView;
@property (retain, nonatomic) id<AWEStickerPickerEffectUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) AWEStickerPickerFootView *footerView;
@property (nonatomic) double prefetchRemainHeight;
@property (nonatomic) BOOL firstScreenIconsHaveShow;
@property (nonatomic) double beginLoadStickerIconTime;
@property (nonatomic) double firstScreenLoadFinishTime;
@property (nonatomic) BOOL enableTitleAnimationDegrade;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (retain, nonatomic) id<ACCGenericEffectCategoryModel> categoryModel;
@property (weak, nonatomic) id<AWEStickerPickerCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)hideErrorView;
- (void)showEmptyView;
- (void)updateUIConfig:(id)a0;
- (void)hideEmptyView;
- (void)didFinishStickerIconShowing;
- (void)scrollToItemAtSection:(unsigned long long)a0 index:(unsigned long long)a1 animated:(BOOL)a2;
- (void)updateIconImageIfNeededWithSticker:(id)a0 forCell:(id)a1 atIndexPath:(id)a2;
- (void)onErrorTap;
- (void)p_clearFootView;
- (id)p_createFootView;
- (BOOL)p_shouldUpdateFailStatus:(id)a0;
- (BOOL)isSectionEnabled;
- (id)getCategoryIndexFromSectionPath:(id)a0;
- (long long)allSectionStickers;
- (void)scrollToItemAtSection:(unsigned long long)a0 index:(unsigned long long)a1 offset:(double)a2 animated:(BOOL)a3;
- (void)reloadData;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)updateStatus:(unsigned long long)a0;
- (void)prepareForReuse;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)showLoadingView;
- (void)showErrorView;
- (void)hideLoadingView;

@end
