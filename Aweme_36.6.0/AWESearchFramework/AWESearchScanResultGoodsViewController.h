@class AWESearchScanResultsEmptyView, NSString, AWESearchScanDataContext, UIView, AWEUILoadingView, UIViewController;
@protocol AWESearchPhotoSearchResultViewControllerProtocol;

@interface AWESearchScanResultGoodsViewController : UIViewController <AWESearchScanResultChildViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWESearchPhotoSearchResultViewControllerProtocol> *goodsViewController;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchScanResultsEmptyView *emptyView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL isFirstLoad;
@property (copy, nonatomic) NSString *lastDetection;
@property (retain, nonatomic) AWESearchScanDataContext *dataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)requestImageDataWithImage:(id)a0 imageTosURL:(id)a1 queryParmas:(id)a2 isFirstLoad:(BOOL)a3 trackParams:(id)a4;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingView;

@end
