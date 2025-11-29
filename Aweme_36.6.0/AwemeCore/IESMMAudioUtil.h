@interface IESMMAudioUtil : NSObject

+ (BOOL)convertFloatDataWithAudioBuffer:(float *)a0 inAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a1;
+ (void)convertIntDataForAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 inAudioData:(float *)a1 numberOfChannels:(int)a2 samplesPerChannel:(int)a3;
+ (float **)rawFloatDataFromFloatAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 numberOfChannels:(int *)a1 samplesPerChannel:(int *)a2;
+ (float **)rawFloatDataFromAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 numberOfChannels:(int *)a1 samplesPerChannel:(int *)a2;
+ (void)updateAudioBuffer:(struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; })a0 withRawFloatData:(float **)a1 numberOfChannels:(int)a2 samplesPerChannel:(int)a3;

@end
