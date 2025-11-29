@class NSURLSession, NSString, NSURLSessionConfiguration, NSObject, DIRSContext;
@protocol OS_dispatch_queue;

@interface DIRSNetworkPlugin : DIRSBasicModule <IRISModule, IRISNetworkProvider> {
    NSObject<OS_dispatch_queue> *networkQueue;
    NSURLSessionConfiguration *configuration;
    NSURLSession *session;
}

@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;

- (void)request:(id)a0 method:(id)a1 headerFields:(id)a2 body:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (id)executionQueue;
- (void).cxx_destruct;
- (void)commonInit;

@end
