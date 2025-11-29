@class POIMediaListMonitor, NSString, NSDictionary, POIMediaListPageModel, UIViewController;
@protocol POIMediaListPlayControllerProtocol, POIMediaListViewControllerProtocol;

@interface POIMediaListPageContext : AWEPageContext

@property (copy, nonatomic) NSDictionary *initialTrackerData;
@property (copy, nonatomic) NSDictionary *initialExtraParams;
@property (retain, nonatomic) POIMediaListPageModel *initialPageData;
@property (copy, nonatomic) NSString *initialMediaID;
@property (nonatomic) long long initialIndex;
@property (weak, nonatomic) POIMediaListMonitor *monitor;
@property (retain, nonatomic) POIMediaListPageModel *pageModel;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (weak, nonatomic) UIViewController<POIMediaListViewControllerProtocol> *vc;
@property (weak, nonatomic) id<POIMediaListPlayControllerProtocol> videoController;

- (void).cxx_destruct;
- (id)init;

@end
