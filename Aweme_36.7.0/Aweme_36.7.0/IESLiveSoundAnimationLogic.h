@interface IESLiveSoundAnimationLogic : NSObject

+ (BOOL)isSpeakingImageListValid:(id)a0;
+ (id)imageWithSpeakingType:(unsigned long long)a0 voiceWave:(id)a1;
+ (id)speakingImageWithGender:(unsigned long long)a0 speakingImageList:(id)a1;
+ (id)imageWithSpeakingType:(unsigned long long)a0 speakingImage:(id)a1;
+ (BOOL)isVoiceWaveEnhanceStyle;
+ (id)imageWithSpeakingImageList:(id)a0 gender:(unsigned long long)a1 speakingType:(unsigned long long)a2 voiceWave:(id)a3;
+ (id)calculateSpeakingImageList:(id)a0;

@end
