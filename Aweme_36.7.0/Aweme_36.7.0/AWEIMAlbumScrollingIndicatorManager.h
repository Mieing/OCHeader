@class NSString, UIViewController, NSMutableDictionary;
@protocol AWEIMAlbumScrollingIndicatorManagerDelegate, AWEIMAlbumListViewControllerProtocol;

@interface AWEIMAlbumScrollingIndicatorManager : NSObject <AWEIMAlbumScrollingIndicatorDelegate>

@property (weak, nonatomic) UIViewController<AWEIMAlbumListViewControllerProtocol> *albumController;
@property (retain, nonatomic) NSMutableDictionary *scrollingIndicatorMap;
@property (weak, nonatomic) id<AWEIMAlbumScrollingIndicatorManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)albumDidShowViewController:(id)a0;
- (id)createIndicator:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)weekdayStringWithDate:(id)a0;
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
- (void)formatStringWithDate:(id)a0 completion:(id /* block */)a1;
- (void)currentDateForIndicatorView:(id)a0 completion:(id /* block */)a1;
- (BOOL)isDate:(id)a0 inNDays:(long long)a1;
- (BOOL)isThisYear:(id)a0;
- (id)dateFormatterMD;
- (id)dateFormatterYMD;
- (double)indicatorBottom;
- (id)initWithPhotoPickerVC:(id)a0;
- (void)albumDidSelectTabListViewController;
- (void)albumDidSelectAsset;
- (void)albumScrollViewDidEndDecelerating:(id)a0 scrollView:(id)a1 index:(long long)a2;
- (void)albumViewControllerDidEndDragging:(id)a0 draggingView:(id)a1 willDecelerate:(BOOL)a2;
- (void)albumScrollViewDidScroll:(id)a0 scrollView:(id)a1 index:(long long)a2;
- (void)albumDidSelect:(id)a0;
- (void).cxx_destruct;
- (BOOL)isYesterday:(id)a0;
- (BOOL)isToday:(id)a0;

@end
