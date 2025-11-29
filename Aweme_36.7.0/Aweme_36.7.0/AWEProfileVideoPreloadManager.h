@interface AWEProfileVideoPreloadManager : NSObject

+ (BOOL)isImageAlbum:(id)a0;
+ (void)preloadImage:(id)a0 completion:(id /* block */)a1;
+ (void)preloadVideo:(id)a0 withGroup:(id)a1 preloadSize:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)preload:(id)a0 group:(id)a1 preloadSize:(unsigned long long)a2 completion:(id /* block */)a3;
+ (void)cancelVideosPreloadWithGroup:(id)a0;

@end
