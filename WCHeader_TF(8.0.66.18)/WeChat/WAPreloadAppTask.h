@class WAJSCoreService, WAWebViewController, WAApptaskPublicResLogic;

@interface WAPreloadAppTask : NSObject

@property (retain, nonatomic) WAApptaskPublicResLogic *publicResLogic;
@property (retain, nonatomic) WAWebViewController *webView;
@property (retain, nonatomic) WAJSCoreService *appService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
