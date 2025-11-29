@class NSString;

@interface TTVideoEngineCacheInfo : NSObject

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *fileKey;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSString *spadeaKey;
@property (nonatomic) double lastUpdateTime;

+ (id)md5:(id)a0;
+ (unsigned long long)localFileSize:(id)a0;
+ (id)keysWithFileName:(id)a0;
+ (BOOL)isValidKeys:(id)a0;
+ (id)fileKey:(id)a0;
+ (id)spadeaKey:(id)a0;
+ (unsigned long long)localFileDateTime:(id)a0;
+ (id)cacheKey:(id)a0;
+ (unsigned long long)fileSize:(id)a0;

- (BOOL)isInDisk;
- (BOOL)checkCacheFile:(id)a0 fileSize:(unsigned long long)a1;
- (void).cxx_destruct;

@end
