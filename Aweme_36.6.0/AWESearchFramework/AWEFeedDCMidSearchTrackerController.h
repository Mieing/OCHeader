@class NSString, AWEFeedDCMidSearchTrackerService, UIViewController;
@protocol AWESearchHubbleDoubleListElementDelegate;

@interface AWEFeedDCMidSearchTrackerController : AWEDCFeedBaseController <AWESearchHubbleDoubleListElementProtocol, AWEFeedDCMidSearchTrackerControllerProtocol>

@property (nonatomic) unsigned long long containerViewState;
@property (retain, nonatomic) AWEFeedDCMidSearchTrackerService *tracker;
@property (weak, nonatomic) UIViewController<AWESearchHubbleDoubleListElementDelegate> *middleBaseVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerViewWillAppear:(BOOL)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)containerViewWillDisappear:(BOOL)a0;
- (void)containerViewDidDisappear:(BOOL)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataStartWithReason:(unsigned long long)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)addNotification;
- (void)commonLynxCell:(id)a0 awemeModel:(id)a1 didClickWithParams:(id)a2;
- (void)lynxContainerDidScroll;
- (void)lynxContainerContentDidUpdate;
- (void)setMiddleVC:(id)a0;
- (void)onReceiveLynxRefreshEvent:(long long)a0 prefetchType:(long long)a1;
- (void)willStartRefreshRequest;
- (void)containerWillDisplayCell;
- (void)containerDidLoadEndImage:(BOOL)a0;
- (void)onReceiveRequestResponse:(BOOL)a0 isStream:(BOOL)a1 isCache:(BOOL)a2;
- (void)onGetCharacteristicInfo:(id)a0;
- (void)getMiddleBaseVC;
- (id)middleFeedEnterFrom;
- (void)switchTabLeaveDC;
- (void)switchTabEnterDC;
- (void)dcFeedPageDidDisAppear;
- (void)dcFeedPageDidAppear;
- (void)showKeyboard:(BOOL)a0 height:(double)a1;
- (void)searchMiddleReturnTransferWith:(id)a0;
- (void).cxx_destruct;
- (double)keyboardHeight;
- (id)init;
- (id)previousPage;
- (BOOL)keyboardShowing;

@end
