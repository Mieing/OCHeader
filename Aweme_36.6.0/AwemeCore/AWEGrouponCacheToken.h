@class NSString;

@interface AWEGrouponCacheToken : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long hasPermissionInCache;
@property (copy, nonatomic) NSString *cityCodeInCache;
@property (copy, nonatomic) NSString *userIdInCache;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) long long cacheStroeTimeStamp;
@property (nonatomic) long long timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithLocationPermission:(BOOL)a0 cityCode:(id)a1 userID:(id)a2 storeTs:(long long)a3;
- (void).cxx_destruct;

@end
