@class NSArray, MMOrderCenterPivotViewController, WCSearcher, NSString;
@protocol MMOrderCenterReporter;

@interface MMOrderCenterLandingPageController : MMUIViewController <WCSearchDelegate>

@property (retain, nonatomic) NSArray *pivotTabControllers;
@property (retain, nonatomic) WCSearcher *searcher;
@property (retain, nonatomic) MMOrderCenterPivotViewController *pivotViewController;
@property (retain, nonatomic) NSString *filteringAppId;
@property (retain, nonatomic) id<MMOrderCenterReporter> reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFilteringAppId:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)a0;
- (void).cxx_destruct;

@end
