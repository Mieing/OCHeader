@class SPXAudioRecorder, NSString, AMRAudioRecorder, SilkAudioRecorder;
@protocol FavAudioRecorderDelegate;

@interface FavAudioRecorder : NSObject <WCAudioModuleDelegate> {
    AMRAudioRecorder *m_amrRecorder;
    SPXAudioRecorder *m_spxRecorder;
    SilkAudioRecorder *m_silkRecorder;
    unsigned int m_audioFormat;
}

@property (retain, nonatomic) NSString *m_filePath;
@property (nonatomic) BOOL needStopInBackground;
@property (weak, nonatomic) id<FavAudioRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resetRecordInBackground;
- (BOOL)StopRecord;
- (void)stop;
- (unsigned int)StartRecord:(unsigned int)a0;
- (unsigned int)startSilkRecorder;
- (unsigned int)StartAmrRecorder;
- (unsigned int)startSpxRecorder;
- (id)getTmpAudioFileName:(unsigned int)a0;
- (void)OnRecorderLevelMeter:(id)a0 Peak:(float)a1;
- (void)OnRecorderBeginRecording:(id)a0 ErrNo:(int)a1;
- (void)OnRecorderPart:(id)a0 Offset:(unsigned int)a1 Len:(unsigned int)a2 EndFlag:(unsigned int)a3 ForceDelete:(BOOL)a4 Duration:(unsigned int)a5;
- (BOOL)OnRecorderPrepareSend:(id)a0;
- (void)OnRecorderEndRecording:(id)a0;
- (void)OnOutputPcmBuffer:(id)a0 UserData:(id)a1;
- (void)audioModuleInterruptionBegin:(id)a0 param:(id)a1;
- (void)handleInterruptionBy3rdApp;
- (void).cxx_destruct;

@end
