@class NSString;

@interface QDataCacheBase : NSObject

@property (copy, nonatomic) NSString *basePath;
@property (copy, nonatomic) NSString *version;

+ (void)clearCache;

- (int)tileType;
- (BOOL)putCacheData:(id)a0;
- (id)getCacheData:(id)a0;
- (id)initWithVersion:(id)a0;
- (void).cxx_destruct;

@end
