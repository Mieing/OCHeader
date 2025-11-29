@class NSThread, NSMutableData, NSMutableDictionary;
@protocol MMGameAudioMixDelegate;

@interface MMGameAudioMixWrapper : NSObject {
    int _outputSampleRate;
    int _outputChannel;
    long long _outputFormat;
    void *_mixerHandler;
    int _outputSize;
    NSMutableDictionary *_nsDic;
    struct shared_ptr<WAGameThreadWaitReady> { struct WAGameThreadWaitReady *__ptr_; struct __shared_weak_count *__cntrl_; } _wait;
}

@property (retain, nonatomic) NSThread *thread;
@property BOOL ready;
@property BOOL terminal;
@property (retain, nonatomic) NSMutableData *mixData;
@property (weak, nonatomic) id<MMGameAudioMixDelegate> delegate;

- (id)init;
- (void)dealloc;
- (BOOL)create:(int)a0 channel:(int)a1 format:(long long)a2;
- (id)getStream:(int)a0 channel:(int)a1 sampleRate:(int)a2 format:(long long)a3;
- (BOOL)putData:(int)a0 channel:(int)a1 sampleRate:(int)a2 format:(long long)a3 data:(void *)a4 size:(int)a5;
- (id)getData;
- (void)destroy;
- (void)onMixThread;
- (int)getInputSampleSize:(int)a0 sampleRate:(int)a1 format:(long long)a2;
- (int)getInputSampleCount:(int)a0 sampleRate:(int)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
