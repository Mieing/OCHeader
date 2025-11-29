@interface CECMomentCameraAudioUtil : NSObject

+ (id)getAverageWaveArrFromWave:(id)a0;
+ (id)audioWaveHeightArrWithAverageWaveArr:(id)a0 neededWaveCount:(long long)a1 maxHeight:(double)a2 minHeight:(double)a3;
+ (id)__calculateMaximalValueFromArray:(id)a0 threshold:(unsigned long long)a1;
+ (id)averageAudioWaveArr:(id)a0 averageCount:(long long)a1;
+ (id)__forgeAudioPowersFromRealPowers:(id)a0 maxHeight:(double)a1 minHeight:(double)a2;
+ (double)getWaveViewWidthWith:(long long)a0 maxLength:(long long)a1;
+ (long long)getWaveCountWith:(long long)a0 maxLength:(long long)a1;

@end
