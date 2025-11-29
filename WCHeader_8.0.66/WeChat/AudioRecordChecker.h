@class NSString;

@interface AudioRecordChecker : MMUserService <IAudioSenderExt, IStreamVoiceInputExt, MMServiceProtocol>

@property (nonatomic) BOOL observingVoiceRecord;
@property (nonatomic) BOOL observingStreamVoiceInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNewRecordTips;

- (void)onServiceInit;
- (void)checkRecordStatus;
- (void)OnLevelMeter:(unsigned int)a0 Peak:(float)a1;
- (void)OnBeginRecording:(unsigned int)a0 ErrNo:(int)a1;
- (void)OnEndRecording:(unsigned int)a0;
- (void)OnStartRecord:(unsigned int)a0;
- (void)OnEndRecord:(unsigned int)a0;

@end
