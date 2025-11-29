@class NSString;

@interface AWEKnowledgeSwiftImpl.HangoutMigContainerViewController : UIViewController <AWEUserMessage, AWEKnowledgeEnableReloadDataProtocol, AWEHangoutTopTabContainerProtocol, AWEFeedTabItemViewControllerProtocol, AWEDCFeedTopAreaSearchDelegate, AWEDCFeedEventDispatcherProtocol, AWEFeedContainerSearchExtraParamsProtocol, AWEDCFeedListViewControllerDelegate> {
    void /* unknown type, empty encoding */ refer;
    void /* unknown type, empty encoding */ channelController;
    void /* unknown type, empty encoding */ placeholderLoadSuccess;
    void /* unknown type, empty encoding */ alreadyBeginFMP;
    void /* unknown type, empty encoding */ $__lazy_storage_$_navBarSearchIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pendantContainer;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bizContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerDataBuffer;
}

@property (nonatomic, readonly) NSString *referString;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)reloadData;
- (void)holdChannelController:(id)a0;
- (id)navBarSearchIconView;
- (void)didEnterWithParams:(id)a0;
- (BOOL)canLandingWithParams:(id)a0;
- (void)didLandingWithParams:(id)a0;
- (void)didLeaveWithParams:(id)a0;
- (void)pulldownRefreshGestureRecognizerBegin:(id)a0;
- (void)pulldownRefreshGestureRecognizerEnd:(id)a0;
- (void)channelTopTabDidSelect;
- (void)preparePlaceHolder;
- (void)pauseWithAnimation;
- (void)animatedRefreshWithCompletion:(id /* block */)a0;
- (BOOL)currentTabIsTop;
- (void)feedRefreshWithType:(long long)a0 completion:(id /* block */)a1;
- (BOOL)canRefresh;
- (void)setScrollEnabled:(BOOL)a0;
- (void)play;
- (void)pause;
- (void)reload;
- (void)stop;
- (id)searchBarClickParamsWithContext:(id)a0;
- (id)fetchGuessWordParamsWithOption:(unsigned long long)a0 extra:(id)a1;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (id)getRecentClickAndShowItems;
- (id)getCustomSearchExtraDict;
- (id)dcFeed:(id)a0 sectionViewModelForAwemeModel:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dcFeed:(id)a0 frameForCollectionView:(id)a1;
- (void)dcFeed:(id)a0 didCreateSectionViewModel:(id)a1 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a2 index:(long long)a3;
- (BOOL)dcFeed:(id)a0 handleRouterEventWithType:(unsigned long long)a1 awemeModel:(id)a2;
- (void)awemeDeleteNotificationHandler:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
