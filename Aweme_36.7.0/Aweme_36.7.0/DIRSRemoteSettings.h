@class NSString, DIRSValue, DIRSConcurrentCollection, DIRSContext;

@interface DIRSRemoteSettings : DIRSBasicModule <IRISContextObserver, IRISIdentifierObserver, IRISConfigurationHandler> {
    BOOL launched;
    BOOL fetched;
}

@property (nonatomic) double fetchInterval;
@property (retain, nonatomic) DIRSConcurrentCollection *raw;
@property (retain) DIRSValue *config;
@property BOOL isEnabled;
@property long long state;
@property (readonly) DIRSContext *context;
@property (copy, nonatomic) NSString *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleId;
+ (id)moduleDependencies;
+ (long long)priority;
+ (id)moduleVersion;

- (void)onIdentifierAvailable;
- (void)onFinishInitialization:(id)a0;
- (void)onFinishLaunching:(id)a0;
- (id)storeFilePath;
- (void)applyRemoteSettings;
- (void)_notifyConfigUpdate:(id)a0 source:(long long)a1;
- (BOOL)allowRequest;
- (id)_sycnFetch;
- (void).cxx_destruct;
- (void)commonInit;
- (void)fetch:(BOOL)a0;
- (void)restore;

@end
