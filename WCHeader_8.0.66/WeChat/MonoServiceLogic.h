@interface MonoServiceLogic : NSObject

+ (BOOL)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)a0 ignoreAppScene:(BOOL)a1 inMainScene:(BOOL)a2;
+ (BOOL)isAudioMonoServiceWorking;
+ (BOOL)isAudioMonoServiceWorkingIgnoreType:(unsigned long long)a0;
+ (BOOL)isVideoMonoServiceWorkingIgnoreAppScene:(BOOL)a0 inMainScene:(BOOL)a1;
+ (BOOL)isVideoMonoServiceWorking;
+ (void)showMonoServiceWorkingConflict;
+ (id)getConflictWording;
+ (void)stopWxaVoipIfNeed;

@end
