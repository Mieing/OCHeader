@class NSString, AWERecordInspirationSearchContentViewController, AWEVideoPublishViewModel, AWERecordInspirationCommonSearchResultEmptyView, AWERecordInspirationCommonSearchResultTimeoutView, ACCWaterfallViewController, ACCRecordInspirationContentProvider, AWERecordInspirationCategoryItem;

@interface AWERecordInspirationCommonSearchResultView : UIView <ACCWaterfallContentScrollDelegate>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) AWERecordInspirationSearchContentViewController *searchContentViewController;
@property (retain, nonatomic) ACCWaterfallViewController *viewController;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *inspirationCategoryItem;
@property (retain, nonatomic) AWERecordInspirationCommonSearchResultEmptyView *searchResultEmptyView;
@property (retain, nonatomic) AWERecordInspirationCommonSearchResultTimeoutView *searchResultTimeoutView;
@property (retain, nonatomic) ACCRecordInspirationContentProvider *contentProvider;
@property (copy, nonatomic) id /* block */ searchResultTimeoutViewTapRefreshAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onThemeChanged;
- (void)waterfallScrollViewDidScroll:(id)a0 viewController:(id)a1;
- (void)requestSearchDetailResultNotification:(id)a0;
- (id)initWithPublishViewModel:(id)a0 searchContentViewController:(id)a1 inspirationCategoryItem:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
