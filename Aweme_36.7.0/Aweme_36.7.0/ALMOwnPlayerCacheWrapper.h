@class NSString;

@interface ALMOwnPlayerCacheWrapper : NSObject <TTVideoEngineExtraInfoProtocol, ALMVideoCacheProtocol>

@property (copy, nonatomic) id /* block */ speedTestBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)clearAllCache;
- (void)speedWithDataLength:(unsigned long long)a0 interval:(double)a1;
- (double)getCacheForSizeKey:(id)a0;
- (void)getCacheFileByKey:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)hasEnoughCacheForURLString:(id)a0 videoDuration:(double)a1 networkSpeed:(double)a2;
- (void)hasCacheForVideoID:(id)a0 URLString:(id)a1 completion:(id /* block */)a2;
- (void)getCacheSizeWithCompletion:(id /* block */)a0;
- (void)setVideoDownloadSpeedTestAction:(id /* block */)a0;
- (void)setCacheSizeLimit:(unsigned long long)a0;
- (void).cxx_destruct;

@end
