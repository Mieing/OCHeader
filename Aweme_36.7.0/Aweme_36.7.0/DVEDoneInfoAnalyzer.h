@interface DVEDoneInfoAnalyzer : NSObject

+ (id)getInfoMessage:(id)a0 type:(unsigned long long)a1;
+ (id)splitInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)speedInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)scaleInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)translationInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)rotateInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)reverseOnInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)reverseOffInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)deleteInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)originalSoundOnInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)originalSoundOffInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)enableAIBeatInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)disableAIBeatInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)addAudioInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)addVideoInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)trimSlotInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)moveAudioInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)sortMainTrackInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)clipSlotInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)transitionInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)fadeInfoFor:(id)a0 type:(unsigned long long)a1;
+ (id)actionTipMessageFor:(id)a0 type:(unsigned long long)a1;

@end
