@class NSString;

@interface WAAudioProxy : NSObject <IWAAudioService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInnerAppAudioActive;
+ (void)showInnerAppAudioConflictAlert;
+ (BOOL)isBackgroundAudioPlayingOrWaiting;
+ (BOOL)pauseBackgroundAudio;
+ (void)resumeBackgroundAudio;
+ (BOOL)isInterrupting;
+ (BOOL)isPhoneCalling;
+ (void)resumeOtherAppPlayingIfNeeded;
+ (void)syncWebViewAudioEvent:(id)a0;


@end
