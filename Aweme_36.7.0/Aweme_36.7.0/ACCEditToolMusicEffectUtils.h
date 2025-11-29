@interface ACCEditToolMusicEffectUtils : NSObject

+ (BOOL)hasEffectMusic:(id)a0;
+ (BOOL)excludeMusic:(id)a0;
+ (BOOL)p_enableEffectToolMusic:(id)a0;
+ (BOOL)enableEffectToolMusic:(id)a0;
+ (double)effectMusicVolume:(id)a0;
+ (BOOL)notRecommendMusic:(id)a0;
+ (void)setPropEffectMusicStart:(double)a0 duration:(double)a1 repository:(id)a2;
+ (struct _HTSAudioRange { double x0; double x1; })getPropEffectMusicRangeWithRepository:(id)a0;

@end
