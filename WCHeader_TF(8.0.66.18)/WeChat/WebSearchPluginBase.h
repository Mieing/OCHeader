@class WCWebSearchViewControllerNewH5, MMUIViewController, WCSearchPageState;
@protocol WCWebSearchPageInterface;

@interface WebSearchPluginBase : WSWebViewPluginBase

@property (readonly, nonatomic) WCWebSearchViewControllerNewH5 *searchVC;
@property (readonly, nonatomic) MMUIViewController<WCWebSearchPageInterface> *searchPage;
@property (readonly, nonatomic) WCSearchPageState *pageState;

@end
