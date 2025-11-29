@class NSDictionary, MMKV, NSMutableDictionary;

@interface BDUGFlowAuthenticationCache : NSObject

@property (retain, nonatomic) MMKV *cache;
@property (retain, nonatomic) NSMutableDictionary *certInfo;
@property (retain, nonatomic) NSMutableDictionary *dynamicCertInfo;
@property (retain, nonatomic) NSMutableDictionary *configDict;
@property (nonatomic) long long hookVersion;
@property (nonatomic) long long certVersion;
@property (nonatomic) BOOL customsDisable;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } rwLock;
@property (readonly, nonatomic) long long authHookVersion;
@property (readonly, nonatomic) long long authCertVersion;
@property (readonly, nonatomic) BOOL authDisable;
@property (readonly, copy, nonatomic) NSDictionary *certData;
@property (readonly, copy, nonatomic) NSDictionary *dynamicCertData;
@property (nonatomic) BOOL trafCusSwitchOff;

+ (id)sharedInstance;

- (void)rebuildWithLocalCache;
- (id)createConfigItem:(id)a0;
- (BOOL)updateDataFromNetwork:(id)a0;
- (void).cxx_destruct;
- (BOOL)updateData:(id)a0;
- (id)init;
- (void)dealloc;

@end
