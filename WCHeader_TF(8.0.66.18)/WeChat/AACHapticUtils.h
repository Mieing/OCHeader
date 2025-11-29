@interface AACHapticUtils : NSObject

+ (BOOL)supportRichTap;
+ (double)getCurrentTime;
+ (BOOL)invalidPlayerID:(long long)a0;
+ (BOOL)stopCoreHaptic:(long long)a0;
+ (long long)startPlayHapticWithAhapPath:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 error:(id /* block */)a5;
+ (long long)startPlayHapticWithHEPath:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 error:(id /* block */)a5;
+ (long long)startPlayHapticWithHEPath:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 playProgress:(id /* block */)a5 error:(id /* block */)a6;
+ (long long)startPlayHapticWithHEJsonString:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 error:(id /* block */)a5;
+ (long long)startPlayHapticWithHEJsonString:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 playProgress:(id /* block */)a5 error:(id /* block */)a6;
+ (long long)startPlayHapticWithAHAPJsonString:(id)a0 mode:(unsigned long long)a1 delayTime:(double)a2 Loop:(unsigned long long)a3 amplitude:(id)a4 error:(id /* block */)a5;
+ (long long)InsertShortSignal:(id)a0 type:(unsigned long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
+ (BOOL)sendParameters:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
+ (BOOL)sendDynamicParametersJSONString:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
+ (BOOL)scheduleParameterCurve:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
+ (BOOL)scheduleCurveParameterJSONString:(id)a0 ID:(long long)a1 delayTime:(double)a2 error:(id /* block */)a3;
+ (BOOL)sendDelayIntervalTime:(double)a0 ID:(long long)a1;
+ (void)quit;
+ (void)startEngine;
+ (void)stopEngine;
+ (void)stop;
+ (BOOL)isPlaying;
+ (BOOL)seekTo:(int)a0;
+ (BOOL)pause;
+ (BOOL)start;
+ (void)playPatternWithAudio:(id)a0 :(id)a1 :(int)a2;
+ (void)playExtPrebakedForHe:(int)a0 :(int)a1;
+ (long long)startPlayHapticWithHEPath:(id)a0 delayTime:(double)a1 Loop:(unsigned long long)a2 error:(id /* block */)a3;
+ (void)playEnvelope:(id)a0 :(id)a1 :(id)a2 :(unsigned char)a3;
+ (void)playEnvelope:(id)a0 :(id)a1 :(id)a2 :(unsigned char)a3 :(int)a4;
+ (void)playPattern:(id)a0 :(int)a1;
+ (void)playPattern:(id)a0 :(int)a1 :(int)a2 :(id /* block */)a3;
+ (void)playPattern:(id)a0 :(int)a1 :(int)a2;
+ (void)sendLoopParameter:(int)a0 :(int)a1;

@end
