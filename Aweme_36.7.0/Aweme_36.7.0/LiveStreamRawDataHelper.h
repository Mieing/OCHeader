@class NSString, LSRawDataAssetWriter;

@interface LiveStreamRawDataHelper : NSObject {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *video_origined_fp;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *audio_origined_fp;
}

@property (retain, nonatomic) LSRawDataAssetWriter *originRecorder;
@property (retain, nonatomic) LSRawDataAssetWriter *effectedRecorder;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL dumpIsFinished;
@property (nonatomic) long long processVideoBufCount;
@property (retain, nonatomic) NSString *videoFileName;
@property (nonatomic) long long maxProcessVideoBufCount;
@property (nonatomic) BOOL isAssemble;
@property (retain, nonatomic) NSString *recordStartTime;
@property (copy, nonatomic) NSString *originRecordURL;
@property (retain, nonatomic) NSString *audioFileName;
@property (retain, nonatomic) NSString *audioFormat;
@property (nonatomic) int audioWriteSize;
@property (nonatomic) int audioLimitSize;

+ (id)dataOfPixelBuffer:(struct __CVBuffer { } *)a0;
+ (id)dataOfYUV420Buffer:(struct __CVBuffer { } *)a0;
+ (id)dataOfRGBBuffer:(struct __CVBuffer { } *)a0;

- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)a0 presentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sourceType:(long long)a2;
- (void)setUserData:(id)a0 type:(long long)a1;
- (void)startRawRecordingWithFileName:(id)a0 maxProcessVideoBufCount:(long long)a1 CompletionHandler:(id /* block */)a2;
- (void)videoResetRecording;
- (void)__stopRecording;
- (void)audioResetRecording;
- (void)startRawRecordingWithFileName:(id)a0 maxProcessVideoBufCount:(long long)a1 isAssemble:(BOOL)a2 CompletionHandler:(id /* block */)a3;
- (void)getRecordStartTime;
- (void)handleComplete:(id)a0 sourceType:(long long)a1 url:(id)a2;
- (void)writeRawData:(struct __CVBuffer { } *)a0 sourceType:(long long)a1;
- (void)startAudioRawRecordingWithFileName:(id)a0 audioFormat:(id)a1 audioLimitSize:(int)a2;
- (BOOL)processVideoPixelbuf:(struct __CVBuffer { } *)a0 sourceType:(long long)a1;
- (void)startAudioRawRecordingWithFileName:(id)a0 audioFormat:(id)a1;
- (int)processPCMData:(void *)a0 length:(int)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)removeObserver;
- (void)addObservers;

@end
