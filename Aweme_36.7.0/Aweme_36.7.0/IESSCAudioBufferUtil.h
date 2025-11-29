@interface IESSCAudioBufferUtil : NSObject

+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withtime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 headerOrTailPart:(BOOL)a2;
+ (void)copyPCMBuffer:(id)a0 toAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1 byteSize:(unsigned long long)a2;
+ (void)copyAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 toPCMBuffer:(id)a1 maxByteSize:(unsigned long long)a2 offset:(long long)a3;
+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 toEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (struct opaqueCMSampleBuffer { } *)cropSampleBufferFormSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 fromStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
