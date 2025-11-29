@interface VEAudioEffectPreprocessor : NSObject

+ (void)processSampleBuff:(struct opaqueCMSampleBuffer { } *)a0;
+ (const char *)getParameterAsChunk:(int *)a0;
+ (id)preProcessAudio:(id)a0;
+ (id)compositionFromAsset:(id)a0 timeRange:(id)a1;
+ (void)process:(float **)a0 inChannel:(int)a1 inSamplesPerChannel:(int)a2;
+ (void)preprocessAVAssets:(id)a0 effectPath:(id)a1 inRangeMap:(id)a2 completion:(id /* block */)a3;
+ (void *)preprocessor;
+ (id)processQueue;

@end
