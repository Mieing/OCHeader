@class NSString;

@interface MMFinderLiveAnchorTaskProceedWebviewController : MMWebViewController <MMWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)configNavigationBarItem;
- (void)onWebViewDidFinishLoad:(id)a0;

@end
