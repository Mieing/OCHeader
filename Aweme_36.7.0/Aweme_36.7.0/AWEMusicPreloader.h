@interface AWEMusicPreloader : NSObject

+ (void)cancelTaskByKey:(id)a0;
+ (void)preloadMusicPlayerModel:(id)a0 preloadSize:(long long)a1 didStart:(id /* block */)a2 didEnd:(id /* block */)a3 didCancelled:(id /* block */)a4;
+ (void)preloadMusicPlayerModel:(id)a0 preloadSize:(long long)a1;
+ (void)preloadMusicPlayerModel:(id)a0;
+ (void)cancelTaskByModel:(id)a0;
+ (int)getCacheSize:(id)a0;
+ (void)cancelAllTasks;

@end
