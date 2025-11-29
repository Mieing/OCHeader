@class DVEPickerBaseCell, NSArray, DVEPickerCategoryTabView, UICollectionView, UIView, NSString, UIButton;
@protocol DVEPickerViewDelegate, DVEPickerEffectErrorViewProtocol, DVEPickerUIConfigurationProtocol, DVEPickerEffectOverlayProtocol;

@interface DVEPickerView : UIView <DVEPickerCategoryTabViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, DVEPickerCollectionViewCellDelegate>

@property (retain, nonatomic) DVEPickerCategoryTabView *tabView;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (retain, nonatomic) id<DVEPickerUIConfigurationProtocol> uiConfig;
@property (copy, nonatomic) NSArray *categoryModels;
@property (retain, nonatomic) DVEPickerBaseCell *currentSelectedCell;
@property (retain, nonatomic) UIView<DVEPickerEffectOverlayProtocol> *loadingView;
@property (retain, nonatomic) UIView<DVEPickerEffectErrorViewProtocol> *errorView;
@property (retain, nonatomic) UIView *errorViewContainer;
@property (retain, nonatomic) UIView<DVEPickerEffectOverlayProtocol> *emptyView;
@property (weak, nonatomic) id<DVEPickerViewDelegate> delegate;
@property (nonatomic) long long defaultSelectedIndex;
@property (readonly, nonatomic) UIButton *clearEffectButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideErrorView;
- (id)initWithUIConfig:(id)a0;
- (void)showEmptyView;
- (void)hideEmptyView;
- (void)setAccessibilities;
- (void)updateLoadingWithTabIndex:(long long)a0;
- (void)updateFetchFinishWithTabIndex:(long long)a0;
- (void)updateFetchErrorWithTabIndex:(long long)a0;
- (void)executeFavoriteAnimationForIndex:(id)a0;
- (void)categoryTabView:(id)a0 didSelectItemAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)onErrorTap;
- (void)updateSelectedStickerForId:(id)a0;
- (void)clearStickerApplyButtonClicked:(id)a0;
- (void)setupStickerCollectionView;
- (void)setupTabViewWithUIConfig:(id)a0;
- (void)notifySelectedTabIndex:(long long)a0;
- (void)selectTabForEffectId:(id)a0 animated:(BOOL)a1;
- (void)selectTabWithCategory:(id)a0;
- (void)pickerCollectionViewCell:(id)a0 performDynamicSize:(id)a1;
- (BOOL)pickerCollectionViewCell:(id)a0 isSelected:(id)a1;
- (void)pickerCollectionViewCell:(id)a0 didSelect:(id)a1 category:(id)a2 indexPath:(id)a3;
- (void)pickerCollectionViewCell:(id)a0 willDisplay:(id)a1 indexPath:(id)a2;
- (id)findFirstStickerById:(id)a0;
- (void)updateStickerStatusForId:(id)a0;
- (void)updateStickerProgressForId:(id)a0 progress:(double)a1;
- (void)currentCategorySelectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void)updateLoading;
- (void)updateFetchFinish;
- (void)updateFetchError;
- (id)categoryModelForIndex:(long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateStatus:(unsigned long long)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (void)dealloc;
- (void)performBatchUpdates:(id /* block */)a0 completion:(id /* block */)a1;
- (void)showLoadingView;
- (void)showErrorView;
- (void)updateCategory:(id)a0;
- (void)hideLoadingView;

@end
