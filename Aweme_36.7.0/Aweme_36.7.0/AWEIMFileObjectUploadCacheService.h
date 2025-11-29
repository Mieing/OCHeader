@class YYCache, NSDictionary, NSString;

@interface AWEIMFileObjectUploadCacheService : HTSService <AWEIMFileObjectUploadCacheService>

@property (retain, nonatomic) YYCache *responseCache;
@property (retain, nonatomic) NSDictionary *cacheStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
