@class NSString, AWEPerformanceDiskStatistics;

@interface AWEGurdSetupImpl : NSObject <IESGurdLogProxyDelegate, AWEPerfResourceCleanStrategy, AWEGurdConfigDelegate>

@property (retain, nonatomic) AWEPerformanceDiskStatistics *cleanStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (Class)aAWEGurdSetupImplCommonAdapterClass;
+ (void)showDebugPage;

- (void)setupByteSync;
- (id)platformDomain;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)a0;
- (double)cleanSizeWithStrategy:(unsigned long long)a0;
- (BOOL)isNetworkDelegateEnabled;
- (id)aAWEGurdSetupImplCommonAdapter;
- (void)gurdLogLevel:(long long)a0 logMessage:(id)a1;
- (long long)gurdEnvType;
- (id /* block */)getDeviceIDBlock;
- (int)byteSyncBusinessId;
- (void)handleByteSyncMessageData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)accessKey;

@end
