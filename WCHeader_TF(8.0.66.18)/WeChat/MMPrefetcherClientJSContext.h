@class MMClientJsApiHandler, MMPrefetcherClientADJsApiHandler, MMPrefetcherClientJsApiHandler, MMPrefetcherClientJSContextConfig, JSVirtualMachine, MMWebJsBasePkgInfo, NSString;

@interface MMPrefetcherClientJSContext : MMWebJSContext

@property (retain, nonatomic) MMClientJsApiHandler *clientJsApiHandler;
@property (retain, nonatomic) MMPrefetcherClientJsApiHandler *clientPrefetcherJsApiHandler;
@property (retain, nonatomic) MMPrefetcherClientADJsApiHandler *clientPrefetcherAdJsApiHandler;
@property (retain, nonatomic) MMPrefetcherClientJSContextConfig *config;
@property (retain, nonatomic) JSVirtualMachine *jsVM;
@property (retain, nonatomic) MMWebJsBasePkgInfo *bizPkgInfo;
@property (readonly, nonatomic) NSString *clientContextId;
@property (copy, nonatomic) id /* block */ callback;

- (id)initWithConfig:(id)a0 jvm:(id)a1 bizPkgInfo:(id)a2;
- (void)internalInit;
- (void).cxx_destruct;

@end
