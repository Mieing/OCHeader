@class NSMutableDictionary, NSString, CAKAlbumViewController, ACCAlbumInputData;

@interface ACCAlbumScrollingIndicatorExtension : ACCAlbumExtension <ACCAlbumScrollingIndicatorDelegate>

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (retain, nonatomic) NSMutableDictionary *scrollingIndicatorMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)albumDidShowViewController:(id)a0;
- (void)albumScrollViewDidEndDecelerating:(id)a0 albumListVC:(id)a1 scrollView:(id)a2;
- (id)createIndicator:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)weekdayStringWithDate:(id)a0;
- (id)currentListViewController;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidSelectTabListViewController:(id)a0 index:(long long)a1;
- (void)albumScrollViewDidScroll:(id)a0 albumListVC:(id)a1 scrollView:(id)a2;
- (void)albumDidDeselectAsset:(id)a0;
- (void)albumDidClickNextButton:(id)a0;
- (void)indicatorDidShow:(id)a0;
- (double)indicatorAreaHeight;
- (void)indicatorContent:(id)a0 completion:(id /* block */)a1;
- (void)indicatorWillScroll:(id)a0;
- (void)indicatorDidScroll:(id)a0;
- (void)indicatorEndScroll:(id)a0;
- (void)loadIndicatorIfNeed;
- (id)currentIndicator;
- (double)scrollerScale;
- (void)trackIndicatorTouched:(id)a0;
- (void)trackIndicatorScrolledEnd:(id)a0;
- (void)trackIndicatorShow:(id)a0;
- (void)formatStringWithDate:(id)a0 completion:(id /* block */)a1;
- (void)currentDateForIndicatorView:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDate:(id)a0 inNDays:(long long)a1;
- (BOOL)isThisYear:(id)a0;
- (id)dateFormatterMD;
- (id)dateFormatterYMD;
- (void)albumDidShowAlbumAssetCell:(id)a0 withAsset:(id)a1 indexPath:(id)a2;
- (void)albumDidSelectAssetes:(id)a0;
- (void)albumDidShowSearchResultViewController:(id)a0;
- (void)albumViewControllerDidEndDragging:(id)a0 albumListVC:(id)a1 draggingView:(id)a2 willDecelerate:(BOOL)a3;
- (void)albumDidSelect:(id)a0 albumModel:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isYesterday:(id)a0;
- (BOOL)isToday:(id)a0;

@end
