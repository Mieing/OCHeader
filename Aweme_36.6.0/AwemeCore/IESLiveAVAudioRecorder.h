@class AVAudioRecorder, NSString;
@protocol IESLiveAudioRecorderDelegate, IESLiveAudioRecorderOutput;

@interface IESLiveAVAudioRecorder : NSObject <AVAudioRecorderDelegate, IESLiveAudioRecorderProvider>

@property (retain, nonatomic) AVAudioRecorder *recorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLiveAudioRecorderDelegate> delegate;
@property (retain, nonatomic) id<IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;

- (void)stopRecord;
- (void)startRecord;
- (float)peakPowerForChannel:(unsigned long long)a0;
- (float)averagePowerForChannel:(unsigned int)a0;
- (void).cxx_destruct;
- (void)audioRecorderDidFinishRecording:(id)a0 successfully:(BOOL)a1;
- (BOOL)prepareToRecord;
- (void)audioRecorderEncodeErrorDidOccur:(id)a0 error:(id)a1;

@end
