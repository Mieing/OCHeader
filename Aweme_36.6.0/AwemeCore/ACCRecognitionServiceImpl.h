@class ACCRecognitionTrackModel, NSString, NSArray, ACCRecordMode, RACSubject, ACCRecordViewControllerInputData, ACCHotPropDataManager, IESMMEffectMessage;
@protocol ACCRecordPropService, ACCScanService, ACCCameraService;

@interface ACCRecognitionServiceImpl : NSObject <ACCRecognitionService>

@property (nonatomic) unsigned long long recognitionState;
@property (copy, nonatomic) NSString *currentDetectModeStr;
@property (copy, nonatomic) NSArray *currentDetectModeArray;
@property (nonatomic) unsigned long long detectResult;
@property (retain, nonatomic) ACCHotPropDataManager *dataManager;
@property (retain, nonatomic) ACCRecordMode *recordMode;
@property (nonatomic) unsigned long long recordState;
@property (nonatomic) unsigned long long recognizeDisable;
@property (retain, nonatomic) RACSubject *recognitionResultSignal;
@property (retain, nonatomic) RACSubject *recognitionEffectsSignal;
@property (retain, nonatomic) RACSubject *disableRecognitionSignal;
@property (retain, nonatomic) RACSubject *hiddenSwitchModeSignal;
@property (retain, nonatomic) IESMMEffectMessage *recognitionMessage;
@property (retain, nonatomic) ACCRecognitionTrackModel *trackModel;
@property (readonly, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<ACCScanService> scanService;
@property (readonly, nonatomic) BOOL disableRecognize;

- (void)willRelease;
- (id)initWithInputData:(id)a0;
- (void)updateRecordMode:(id)a0;
- (void)markShowedBubble:(unsigned long long)a0;
- (BOOL)shouldShowBubble:(unsigned long long)a0;
- (unsigned long long)checkInputData:(id)a0;
- (BOOL)bubbleShowed:(unsigned long long)a0;
- (BOOL)isTodayFirstRecord;
- (id)keyForBubble:(unsigned long long)a0;
- (BOOL)isReadyForRecognition;
- (void).cxx_destruct;

@end
