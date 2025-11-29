@interface MusicHelper : NSObject

+ (BOOL)isPlaying;
+ (BOOL)isPaused;
+ (BOOL)pauseWithManually:(BOOL)a0 reportScene:(unsigned int)a1;
+ (BOOL)pause;
+ (void)resume;
+ (void)resumeByWechatBiz;
+ (void)resumeOnlyFromManualPause:(BOOL)a0;
+ (void)stop;
+ (BOOL)isIdle;
+ (BOOL)isWaiting;

@end
