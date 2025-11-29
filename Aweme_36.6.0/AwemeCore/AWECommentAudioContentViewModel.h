@interface AWECommentAudioContentViewModel : NSObject

+ (id)averageWaveArrWithWave:(id)a0;
+ (id)audioWaveHeightArrWithAverageWaveArr:(id)a0 duration:(long long)a1;
+ (struct CGSize { double x0; double x1; })audioWavePathSizeWithAverageWaveArr:(id)a0 duration:(long long)a1;
+ (id)audioWavePathWithWaveHeightArr:(id)a0;
+ (long long)p_audioPowerCountWithPowerArr:(id)a0 duration:(double)a1;
+ (id)__forgeAudioPowersFromRealPowers:(id)a0;
+ (id)__calculateMaximalValueFromArray:(id)a0 threshold:(unsigned long long)a1;

@end
