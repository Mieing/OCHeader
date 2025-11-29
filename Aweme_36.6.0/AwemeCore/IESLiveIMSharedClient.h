@interface IESLiveIMSharedClient : IESLiveIMPaaSUnifiedClient

+ (id)sharedInstance;

- (id)commonParams;
- (id)httpParams:(id)a0;
- (id)websocketParams:(id)a0;

@end
