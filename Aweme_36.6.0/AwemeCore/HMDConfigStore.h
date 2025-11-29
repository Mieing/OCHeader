@class NSString, NSMutableDictionary, NSMutableSet, HMDHeimdallrConfig;
@protocol HMDNetworkProvider;

@interface HMDConfigStore : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexlock;
}

@property (copy, nonatomic) NSString *appID;
@property (retain, nonatomic) NSMutableDictionary *lastTimestamp;
@property (retain, nonatomic) NSMutableDictionary *transmissionData;
@property (retain, nonatomic) HMDHeimdallrConfig *hostConfig;
@property (retain, nonatomic) NSMutableDictionary *configList;
@property (retain, nonatomic) id<HMDNetworkProvider> hostProvider;
@property (retain, nonatomic) NSMutableDictionary *providerList;
@property (retain, nonatomic) NSMutableSet *sdkAppIDList;
@property (readonly, copy, nonatomic) NSString *hostAppID;
@property BOOL configFromDefaultDictionary;
@property BOOL firstFetchingCompleted;

+ (id)loadSDKAppIDList;
+ (void)saveSDKAppIDList:(id)a0;

- (id)transmissionDataForAppID:(id)a0;
- (BOOL)isHostAppID:(id)a0;
- (void)updateTransmissionDataWithDict:(id)a0 forAppID:(id)a1;
- (id)lastTimestampForAppID:(id)a0;
- (void)setLastTimestamp:(id)a0 forAppIDList:(id)a1;
- (id)majorConfig;
- (BOOL)setDefaultConfig:(id)a0 forAppID:(id)a1;
- (BOOL)setRemoteConfigs:(id)a0;
- (id)configForAppID:(id)a0;
- (void)enumerateAppIDsAndConfigsUsingBlock:(id /* block */)a0;
- (BOOL)addProvider:(id)a0 forAppID:(id)a1;
- (BOOL)removeProvider:(void *)a0 forAppID:(id)a1;
- (id)providerForAppID:(id)a0;
- (void)enumerateAppIDsAndProvidersUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
