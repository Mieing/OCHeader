@class WCFinderJumpSearchUGCParams, NSString;

@interface WCFinderUGCSearchViewController : WCFinderFeedListViewController <WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderJumpSearchUGCParams *params;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParams:(id)a0;
- (void)viewDidLoad;
- (void)requestPageData:(BOOL)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
