@class WKWebView;

@interface SECRouteWebManager : NSObject

@property (weak, nonatomic) WKWebView *buffer;
@property (nonatomic) BOOL sceneStackEnabled;
@property (nonatomic) BOOL eventFlowDetectAllEnabled;

+ (id)shared;

- (void)tryToConsumeWebBuffer;
- (id)fetchOrCreateStandardNativeTraceFromWebView:(id)a0 navigationURL:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
