@class NSString, NSMutableDictionary;

@interface AWEConcernAwemeCacheManager : NSObject <AWEConcernAwemeCacheManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *awemeCachedInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getDomainInfo:(BOOL)a0 containerID:(id)a1 domain:(id)a2;
- (void)cacheAweme:(id)a0 widthInfo:(id)a1;
- (void)updateAweme:(id)a0 newAweme:(id)a1;
- (id)awe_convertDictToModel:(id)a0;
- (void)storeAwemeCache:(id)a0 withConfig:(id)a1;
- (void)clearAwemeCache:(id)a0 errorMsg:(id *)a1;
- (void)updateAwemeCache:(id)a0 errorMsg:(id *)a1;
- (id)getDomainInfoWithcontainerID:(id)a0 domain:(id)a1;
- (void).cxx_destruct;

@end
