@class NSMutableDictionary, NSMutableSet, WKWebView, NSMutableArray;

@interface WCWebEventsStore : MMObject

@property (retain, nonatomic) NSMutableArray *curNavigationEventsQueue;
@property (retain, nonatomic) NSMutableSet *curEventsStore;
@property (retain, nonatomic) NSMutableArray *curEventActions;
@property (retain, nonatomic) NSMutableDictionary *reqToFullUrlDic;
@property (weak, nonatomic) WKWebView *webView;

+ (id)eventSetDescription:(id)a0;

- (id)init;
- (void)__dispatchWebEvent:(id)a0;
- (void)checkActions;
- (void)appendWebEvent:(id)a0;
- (void)resetWebEventStore;
- (id)webviewEventsInStore;
- (void)appendArrWebEventAction:(id)a0;
- (void).cxx_destruct;

@end
