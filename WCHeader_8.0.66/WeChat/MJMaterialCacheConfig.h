@class NSString;

@interface MJMaterialCacheConfig : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long capacity;

+ (id)defaultConfigs;
+ (id)cacheKeyForSegmentType:(unsigned long long)a0;

- (id)initWithKey:(id)a0 scene:(unsigned long long)a1 type:(unsigned long long)a2 capacity:(unsigned long long)a3;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
