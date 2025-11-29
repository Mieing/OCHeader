@class NSTimer, NSDictionary, MMKV;

@interface BDXSchemaRedirectConfigStorage : NSObject <BDXSchemaRedirectConfigStorageProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

@property (retain, nonatomic) NSTimer *timer;
@property (copy, nonatomic) NSDictionary *configDict;
@property (retain, nonatomic) MMKV *mmkv;

+ (long long)pollInterval;
+ (id)sharedInstance;
+ (void)setConfigUrl:(id)a0;

- (void)updateConfigDict;
- (id)redirectConfigWithConfigDict:(id)a0 type:(long long)a1;
- (void)fetchConfigDictWithCompletion:(id /* block */)a0;
- (double)limitSecondFromConfigDict:(id)a0;
- (void)getRedirectConfig:(id /* block */)a0;
- (id)getLocalRedirectConfig;
- (void)pollRedirectConfig;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)configUrl;

@end
