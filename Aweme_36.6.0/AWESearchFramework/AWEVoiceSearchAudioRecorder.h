@class NSString;
@protocol AWESearchAudioRecorderDelegate;

@interface AWEVoiceSearchAudioRecorder : NSObject <AWEVoiceSearchAudioRecorderProvider> {
    struct OpaqueAudioQueue { } *_audioQueue;
}

@property (nonatomic) double audioQueueTimeIntervalOfBuffer;
@property (weak, nonatomic) id<AWESearchAudioRecorderDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)startRecord;
- (void)callBackDidOccurOSErrorWithCode:(int)a0;
- (float)averagePowerForChannel;
- (void)disposeRecordQueue;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)prepareToRecord;

@end
