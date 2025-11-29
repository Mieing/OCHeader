@class NSHashTable, NSString, AWEVideoPublishViewModel;
@protocol ACCCreationToolRecordService, ACCRecordSwitchModeService, ACCCameraService;

@interface ACCRecordTrackServiceImpl : NSObject <ACCRecordTrackService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL earphoneOn;
@property (retain, nonatomic) NSHashTable *recordVideoHandlers;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCCreationToolRecordService> creationRecordService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (copy, nonatomic) NSString *recordModeTrackName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (void)configTrackDidLoad;
- (void)trackPauseRecordWithCameraService:(id)a0 error:(id)a1 sticker:(id)a2 beautyStatus:(long long)a3;
- (void)trackEnterVideoShootPage;
- (void)trackPreviewPerformanceWithInfo:(id)a0 nextAction:(id)a1;
- (void)trackError:(id)a0 action:(id)a1 info:(id)a2;
- (void)trackEffectParamsWithCameraService:(id)a0 scene:(id)a1 info:(id)a2;
- (void)trackRecordVideoEventWithCameraService:(id)a0 sticker:(id)a1;
- (void)registRecordVideoHandler:(id)a0;
- (unsigned long long)recordScene;
- (void)initEarphoneState;
- (id)VEFrameParams;
- (void)trackRecordPerformanceWithCameraService:(id)a0 beautyStatus:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
