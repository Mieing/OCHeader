@interface LSLiveAudioBufferUtils : NSObject

+ (struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)createBufferList:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 frameCount:(unsigned int)a1;
+ (void)freeBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (void)copyBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 srcBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1;
+ (void)resetBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a0;
+ (void)resetAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
+ (void)mixAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 dstBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a1;
+ (void)mixAudioDataWithVolume:(short *)a0 srcLength:(int)a1 srcVolume:(double)a2 dstData:(short *)a3 dstLength:(int)a4 dstVolume:(double)a5;
+ (void)mixAudioBufferListWithVolume:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 srcVolume:(double)a1 dstBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a2 dstVolume:(double)a3;
+ (void)mixAudioBuffer:(short *)a0 srcDataSize:(unsigned int)a1 srcVolume:(double)a2 dstBuffer:(short *)a3 dstDataSize:(unsigned int)a4 dstVolume:(double)a5;
+ (void)writePCMFile:(id)a0 pcmData:(char *)a1 length:(int)a2;
+ (void)createBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a0;
+ (void)freeBufferQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a0;
+ (void)pushQueue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a0 srcData:(short *)a1 dataSize:(unsigned int)a2;
+ (int)dequeue:(struct AudioBufferQueue { char *x0; unsigned int x1; } *)a0 dstData:(short *)a1 outputSize:(unsigned int)a2;

@end
