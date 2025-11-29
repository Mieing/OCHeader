@class NSString;

@interface WABGAudioMinimizationProxy : NSObject <IWABGAudioMinimizationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isBGAudioEnabled;
+ (void)updateBGAudioInfo:(id)a0 forHost:(id)a1;
+ (id)bgAudioInfo:(id)a0;
+ (void)clearBGAudioInfoForHost:(id)a0;
+ (BOOL)updateState:(long long)a0 forHost:(id)a1;
+ (BOOL)show:(id)a0;
+ (BOOL)dismiss:(id)a0;
+ (void)stopBGAudio;
+ (BOOL)hasVoipBGAudio;
+ (void)bgAudioInterrupted:(BOOL)a0;
+ (void)prepareForMinimizationCoverStyle:(id)a0;


@end
