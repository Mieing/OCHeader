@class NSArray, AWEStorage;

@interface AWEMVLocalExperimentManager : NSObject

@property (nonatomic) long long lastNetworkStatus;
@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) NSArray *fibonacci;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) long long errorCode;

+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (id)sharedManager;

- (void)handleConnectionChanged:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)resultWithName:(id)a0;
- (id)resultWithName:(id)a0 expose:(BOOL)a1;
- (void)exposeExperiment:(id)a0 vid:(id)a1 retryCount:(long long)a2;
- (void)fetchExperimentsIfNeeded;
- (long long)generateRandomNumber;
- (id)hitTest:(long long)a0 withExperiment:(id)a1;
- (void).cxx_destruct;
- (void)registerNotifications;
- (id)init;
- (BOOL)isValidVersion:(id)a0;
- (void)dealloc;

@end
