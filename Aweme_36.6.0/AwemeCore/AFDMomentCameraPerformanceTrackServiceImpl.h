@class NSString, NSMutableDictionary, AFDMomentCameraContext;
@protocol ACCServiceProvideRecipe, AFDMomentContextService, CECMomentCameraFlowService, CECMomentCameraSwitchTabService, CECMomentCameraService;

@interface AFDMomentCameraPerformanceTrackServiceImpl : NSObject <CECMomentCameraFlowServiceSubscriber, AFDMomentCameraPerformanceTrackService>

@property (retain, nonatomic) NSMutableDictionary *extraDictionary;
@property (retain, nonatomic) NSMutableDictionary *tickDictionary;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL hasEnterPublishPage;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<CECMomentCameraService> multiCameraService;
@property (weak, nonatomic) id<CECMomentCameraFlowService> multiFlowService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long cameraEnterFrom;
@property (nonatomic) double openCameraTime;
@property (nonatomic) double asyncTime;
@property (nonatomic) double createCameraEndTime;
@property (nonatomic) double openAlbumTime;
@property (nonatomic) double didSelectAlbum;
@property (nonatomic) double toEditTime;
@property (nonatomic) double startDownload;
@property (nonatomic) double cameraDidAppearTimeStamp;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;

- (void)setExtra:(id)a0 forKey:(id)a1;
- (id)extraTrackParams;
- (id)getExtraForKey:(id)a0;
- (void)trackEventImplWithRefinement:(BOOL)a0;
- (double)valueWithType:(long long)a0;
- (double)p_trackEventCostValid:(double)a0;
- (void)resetPerformanceCameraFirstFrame;
- (void)trackPerformanceVideoPreview;
- (void)trackPerformanceVideoRecord;
- (id)trackCommonPropertyDict;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)markHasEnterPublishPage;
- (void)trackType:(long long)a0;
- (void)trackPerformanceCameraFirstFrame;
- (void)trackPerformanceRecordPageFirstFrame;
- (void)trackPerformanceEffectFirstFrame;
- (void)trackPerformanceMediaSaveFinishWithExtraInfo:(id)a0;
- (void)trackPerformanceContentFirstFrameWithContentType:(id)a0 contentSource:(id)a1;
- (void)trackExchangeMomentWithEvent:(id)a0 extraParams:(id)a1 isAddCommonDict:(BOOL)a2;
- (void)trackPerformanceAlbumFirstFrame;
- (void)trackEnterCameraWithEnterFrom:(long long)a0;
- (void).cxx_destruct;
- (void)finish;
- (id)initWithServiceProvider:(id)a0;

@end
