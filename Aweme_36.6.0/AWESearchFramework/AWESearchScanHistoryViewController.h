@class AWESearchScanHistoryDataController, AWESearchScanHistoryContentDataSource, AWESearchScanHistoryNavigationView, AWESearchScanHistoryEmptyView, NSString, AWESearchScanDataContext, UIPanGestureRecognizer, UICollectionView, AWESearchScanHistoryContentFlowLayout;

@interface AWESearchScanHistoryViewController : UIViewController <UICollectionViewDelegate, UIGestureRecognizerDelegate, AWESearchScanHistoryCellDelegate, UIViewControllerTransitioningDelegate, AWESearchScanChildProtocol>

@property (retain, nonatomic) AWESearchScanHistoryEmptyView *emptyView;
@property (retain, nonatomic) AWESearchScanHistoryNavigationView *navigationView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWESearchScanHistoryContentDataSource *contentDataSource;
@property (retain, nonatomic) AWESearchScanHistoryContentFlowLayout *contentLayout;
@property (retain, nonatomic) UIPanGestureRecognizer *historyPagePanGesture;
@property (retain, nonatomic) AWESearchScanHistoryDataController *dataController;
@property (retain, nonatomic) AWESearchScanDataContext *dataContext;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleScrollViewPan:(id)a0;
- (void)configUI;
- (id)initWithDataContext:(id)a0;
- (void)setupBind;
- (void)fetchHistoryData;
- (void)setupCorner;
- (void)deleteHistoryItemWithScanID:(id)a0;
- (void)updateOffset:(double)a0 animated:(BOOL)a1;
- (void)scrollToDismiss:(double)a0;
- (void)scrollToShow:(double)a0;
- (void)handleAutoScroll:(double)a0;
- (void)deleteItemWithScanID:(id)a0 completion:(id /* block */)a1;
- (void)clearAllHistoryConfirmTapped;
- (void)clearAllCancelButtonTapped;
- (void)presentBottomPresentationController:(id)a0;
- (void)handleHistroyPan:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)viewDidLoad;

@end
