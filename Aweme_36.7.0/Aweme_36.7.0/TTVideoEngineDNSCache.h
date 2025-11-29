@class NSString, NSMutableDictionary;

@interface TTVideoEngineDNSCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *resolvedDomainDic;
@property (nonatomic) long long networkType;
@property (copy, nonatomic) NSString *expiredTime;

+ (id)shareCache;

- (id)resolveHost:(id)a0;
- (void)clearHost;
- (BOOL)isCacheHostVaild:(id)a0 andExpiredTime:(long long)a1;
- (BOOL)cacheHost:(id)a0 respondJson:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
