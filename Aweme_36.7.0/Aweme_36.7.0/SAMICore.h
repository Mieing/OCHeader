@protocol SAMICoreCallbackListener;

@interface SAMICore : NSObject {
    void *_handle;
    int _identify;
    struct audioBlock { int dataType; unsigned int numberAudioData; void *audioData; void *userContext; } _in_audio_block;
    struct audioBlock { int dataType; unsigned int numberAudioData; void *audioData; void *userContext; } _out_audio_block;
}

@property (retain, nonatomic) id<SAMICoreCallbackListener> serverCallback_;

+ (void)SAMICoreRegisterPrintStr2Log:(void /* function */ *)a0;
+ (int)initContextWithType:(long long)a0 parameter:(id)a1;
+ (int)SAMICoreSetLogCallBack:(void /* function */ *)a0;
+ (void)SAMICoreUnregisterPrintStr2Log:(void /* function */ *)a0;
+ (void)SAMICore_RegisterTraceSpanCallback:(void /* function */ *)a0;
+ (int)SAMICore_RegisterWakeupParamRequestCallback:(void /* function */ *)a0;
+ (int)releaseContext:(long long)a0;

- (int)setProperty:(id)a0 withId:(int)a1;
- (id)initWithIdentify:(long long)a0 param:(id)a1 result:(int *)a2;
- (int)getProperty:(id)a0 withId:(int)a1;
- (int)processWithInBlock:(id)a0 outBlock:(id)a1;
- (int)prepareBufferWithIdentify:(long long)a0 numInBuffer:(int)a1 maxBlockSize:(int)a2 numChannel:(int)a3 isInterleave:(BOOL)a4;
- (int)initDebugWithConfig:(id)a0;
- (int)releaseDebugConfig;
- (void)destroy;
- (void)dealloc;

@end
