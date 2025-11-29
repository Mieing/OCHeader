@interface AWEAudioUtilities : NSObject

+ (id)cachedRootDirectory;
+ (id)p_getMD5WithString:(id)a0;
+ (id)cachedPathForUrl:(id)a0;
+ (id)cachedPathForMusic:(id)a0;
+ (void)clearAudioCache;
+ (id)detectAudioFileTypeFromURL:(id)a0;
+ (id)videoEngingeCacheKey:(id)a0;

@end
