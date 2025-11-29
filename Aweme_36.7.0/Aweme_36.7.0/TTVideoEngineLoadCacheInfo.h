@class NSString, NSArray, NSError;

@interface TTVideoEngineLoadCacheInfo : NSObject <NSCopying>

@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) long long mediaSize;
@property (nonatomic) long long preloadHeaderSize;
@property (nonatomic) long long preloadOffset;
@property (nonatomic) long long preloadSize;
@property (nonatomic) long long cacheState;
@property (nonatomic) unsigned long long resolution;
@property (copy, nonatomic) NSArray *cacheRanges;
@property (copy, nonatomic) NSString *localFilePath;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) long long maxCacheEnd;

- (void).cxx_destruct;
- (void)setCacheSize:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFinished;

@end
