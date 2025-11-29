@interface AFDAudioPreloader : NSObject

+ (id)sessionIDCookieString;
+ (BOOL)shouldPreloadAudio;
+ (void)preloadAudioFileWithModel:(id)a0 preloadSize:(long long)a1 didStart:(id /* block */)a2 didEnd:(id /* block */)a3 didCancelled:(id /* block */)a4;
+ (void)preloadAudioFileWithModel:(id)a0 preloadSize:(long long)a1;
+ (id)uniqueSharedCookieStringWithFilteringBlock:(id /* block */)a0;
+ (void)preloadAudioFileWithAweme:(id)a0;

@end
