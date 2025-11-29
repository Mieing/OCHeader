@class NSString;
@protocol IESLiveAudioRecorderDelegate, IESLiveAudioRecorderOutput;

@interface IESLiveAVAudioStreamingRecorder : NSObject <IESLiveAudioRecorderProvider> {
    struct OpaqueAudioQueue { } *_audioQueue;
}

@property (weak, nonatomic) id<IESLiveAudioRecorderDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopRecord;
- (void)startRecord;
- (void)callBackDidOccurOSErrorWithCode:(int)a0;
- (float)averagePowerForChannel:(unsigned int)a0;
- (void).cxx_destruct;
- (BOOL)prepareToRecord;

@end
