@class NSString, DIRSContext;

@interface DIRSTTNetworkPlugin : DIRSBasicModule <IRISModule, IRISModuleGlobal, IRISNetworkProvider>

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
+ (id)sharedInstance;
+ (id)moduleVersion;

- (void)request:(id)a0 method:(id)a1 headerFields:(id)a2 body:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (void)commonInit;

@end
