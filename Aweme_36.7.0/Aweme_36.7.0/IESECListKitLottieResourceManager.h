@class YYMemoryCache;

@interface IESECListKitLottieResourceManager : NSObject

@property (readonly, nonatomic) YYMemoryCache *memoryCache;

+ (void)cleanLottieResourceIfNeeded;

- (int)startDownloadWithURL:(id)a0 progress:(id /* block */)a1 result:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
