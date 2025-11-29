@class NSArray, NSMutableDictionary;

@interface SECWebNetTrafficCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *netModels;
@property (copy, nonatomic) NSArray *loadRequestbacktraces;

+ (void)executeDetectionTaskForEvent:(id)a0;
+ (id)executeProtectTaskForEvent:(id)a0;
+ (id)trafficCenterWithWebView:(id)a0 autoCreate:(BOOL)a1;
+ (id)trafficCenterWithWebView:(id)a0;

- (void)receiveLoadRequest:(id)a0;
- (void)receiveRequestEvent:(id)a0;
- (void)receiveResponseEvent:(id)a0;
- (void)receiveFailedMainFrameURL:(id)a0;
- (void)receiveRedirectMainFrameURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;

@end
