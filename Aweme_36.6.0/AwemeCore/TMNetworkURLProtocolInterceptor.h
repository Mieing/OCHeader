@interface TMNetworkURLProtocolInterceptor : NSObject

+ (id)sharedInstance;

- (void)startIntercepting;
- (void)stopIntercepting;

@end
