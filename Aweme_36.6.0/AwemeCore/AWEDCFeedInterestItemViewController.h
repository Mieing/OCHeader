@class AWEListDataController, NSString, AWEDCFeedTabItemModel, UIViewController;
@protocol AWEDCFeedDataControllerProtocol, AWEDCFeedListViewControllerProtocol, AWEDCFeedCommonDataControllerProtocol;

@interface AWEDCFeedInterestItemViewController : UIViewController <AWEDCFeedListViewControllerDelegate, AWEDCFeedTabListItemViewControllerProtocol>

@property (retain, nonatomic) UIViewController<AWEDCFeedListViewControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEListDataController<AWEDCFeedDataControllerProtocol, AWEDCFeedCommonDataControllerProtocol> *dataController;
@property (retain, nonatomic) AWEListDataController<AWEDCFeedDataControllerProtocol, AWEDCFeedCommonDataControllerProtocol> *innerDataController;
@property (retain, nonatomic) AWEDCFeedTabItemModel *itemModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterHomepageTabProcessID;
@property (nonatomic) BOOL isMultiTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (void)configWithTabItemModel:(id)a0;
- (BOOL)tabListDisableTabItemStickSegmentedControl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })dcFeed:(id)a0 frameForCollectionView:(id)a1;
- (void)enterChannelContainer;
- (void)exitChannelContainerWithExitMethod:(id)a0;
- (id)commonTrackerParams;
- (id)getFeedListConfig;
- (id)getClientInsertIDs;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
