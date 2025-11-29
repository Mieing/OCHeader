@class AWETextTemplateCategoryTabView, NSArray, UICollectionView, AWETextTemplateBaseCell, NSMutableDictionary, AWETextTemplateModel, NSString;
@protocol AWETextTemplateUIConfigurationProtocol, AWETextTemplateViewDelegate;

@interface AWETextTemplateView : UIView <AWETextTemplateCategoryTabViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AWETextTemplateCollectionViewCellDelegate>

@property (retain, nonatomic) AWETextTemplateCategoryTabView *tabView;
@property (retain, nonatomic) UICollectionView *stickerCollectionView;
@property (copy, nonatomic) NSArray *categoryModels;
@property (retain, nonatomic) AWETextTemplateBaseCell *currentSelectedCell;
@property (retain, nonatomic) id<AWETextTemplateUIConfigurationProtocol> UIConfig;
@property (retain, nonatomic) NSMutableDictionary *contentOffsetMap;
@property (weak, nonatomic) id<AWETextTemplateViewDelegate> delegate;
@property (retain, nonatomic) AWETextTemplateModel *model;
@property (nonatomic) long long defaultSelectedIndex;
@property (nonatomic) BOOL isOnRecordingPage;
@property (nonatomic) BOOL enableContentOffsetRemember;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonTrackParams;
- (id)initWithUIConfig:(id)a0;
- (void)updateSelectedIndex:(long long)a0;
- (id)selectedTabName;
- (void)updateLoadingWithTabIndex:(long long)a0;
- (void)updateFetchFinishWithTabIndex:(long long)a0;
- (void)updateFetchErrorWithTabIndex:(long long)a0;
- (void)updateSelectedIndex:(long long)a0 contentOffsetValue:(id)a1;
- (struct CGPoint { double x0; double x1; })currentCellContentOffset;
- (BOOL)stickerPickerCollectionViewCell:(id)a0 isStickerSelected:(id)a1;
- (void)stickerPickerCollectionViewCell:(id)a0 didSelectSticker:(id)a1 category:(id)a2 indexPath:(id)a3;
- (void)stickerPickerCollectionViewCell:(id)a0 willDisplaySticker:(id)a1 indexPath:(id)a2;
- (Class)stickerCellClass;
- (void)categoryTabView:(id)a0 didSelectItemAtIndex:(long long)a1 animated:(BOOL)a2;
- (void)stickerPickerCollectionViewCell:(id)a0 scrollViewDidEndDecelerating:(id)a1;
- (void)stickerPickerCollectionViewCell:(id)a0 scrollViewDidEndDragging:(id)a1 willDecelerate:(BOOL)a2;
- (void)updateSelectedStickerForId:(id)a0;
- (void)clearStickerApplyButtonClicked:(id)a0;
- (void)setupStickerCollectionView;
- (void)setupTabViewWithUIConfig:(id)a0;
- (void)notifySelectedTabIndex:(long long)a0;
- (void)selectTabForEffectId:(id)a0 animated:(BOOL)a1;
- (void)selectTabWithCategory:(id)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)updateSubviewsAlpha:(double)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidScroll:(id)a0;
- (void)layoutSubviews;
- (void)dealloc;
- (BOOL)shouldShowTabBar;
- (void)updateCategory:(id)a0;

@end
