@class NSString, SimpleAudioRecorder;
@protocol HearingAidRecorderDelegate;

@interface HearingAidRecorderLogic : NSObject <SimpleRecordBufferDelegate> {
    BOOL m_bStop;
}

@property (retain, nonatomic) SimpleAudioRecorder *recorder;
@property (copy, nonatomic) NSString *currentVoiceId;
@property (weak, nonatomic) id<HearingAidRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (BOOL)startRecording;
- (BOOL)stopRecording;
- (BOOL)restartRecording;
- (void)outputPcmBuffer:(void *)a0 bufferSize:(unsigned int)a1;
- (void)outputPeakPower:(float)a0;
- (unsigned int)bitsPerChannel;
- (unsigned int)framesPerPacket;
- (unsigned int)channlesPerFrame;
- (double)simpleRateForBuffer;
- (float)playPerTimes;
- (void).cxx_destruct;

@end
