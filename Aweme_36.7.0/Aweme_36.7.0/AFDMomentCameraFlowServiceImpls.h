@class UIColor, NSString, NSPointerArray, UIImage, HTSVideoData, NSObject, IESMMCaptureOptions;
@protocol AFDMomentContextService, AFDMomentCameraUploadImageResource, OS_dispatch_group, OS_dispatch_queue, AFDMomentCameraPublishService, AFDMomentCameraPerformanceTrackService, AFDMomentCameraService, AFDMCEditService, ACCServiceProvideRecipe;

@interface AFDMomentCameraFlowServiceImpls : NSObject <CMCRecorderEvent, AFDMomentCameraLifeCircleEvent, AFDMomentCameraFlowService>

@property (nonatomic) long long currentState;
@property (nonatomic) double currentDuration;
@property (retain, nonatomic) UIImage *capturedImage;
@property (retain, nonatomic) UIImage *publishPreviewImage;
@property (retain, nonatomic) HTSVideoData *videoData;
@property (nonatomic) BOOL userInteractionEnabled;
@property (retain, nonatomic) NSPointerArray *subscribers;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *syncTakePhotoGroup;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncStateChangeQueue;
@property (retain, nonatomic) IESMMCaptureOptions *captureOptions;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (weak, nonatomic) id<AFDMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (nonatomic) long long currentBrushEditState;
@property (weak, nonatomic) id<AFDMomentCameraPublishService> publishService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isLargeCaptureRatio;
@property (nonatomic) BOOL isAlbumShowing;
@property (readonly, nonatomic) unsigned long long draftType;
@property (retain, nonatomic) UIImage *brushCapturedImage;
@property (nonatomic) long long brushEditContentType;
@property (nonatomic) BOOL isTextMode;
@property (nonatomic) BOOL isHasTextSticker;
@property (retain, nonatomic) UIImage *textCapturedImage;
@property (retain, nonatomic) UIColor *textBrushModeBgColor;
@property (readonly, nonatomic) BOOL isUpload;
@property (retain, nonatomic) id<AFDMomentCameraUploadImageResource> uploadImageResource;

- (void)onFinishExportVideoDataWithData:(id)a0 error:(id)a1;
- (void)cameraService:(id)a0 didReachMaxTimeVideoRecordWithError:(id)a1;
- (void)cameraService:(id)a0 didChangeDuration:(double)a1 totalDuration:(double)a2;
- (void)pauseVideoRecord;
- (void)takePhoto;
- (void)exportVideo;
- (void)startVideoRecord;
- (void)triggerDelayEnableUserInteraction;
- (id)currentMomentType;
- (void)updateCapturedImage:(id)a0;
- (void)p_clearCacheData;
- (void)p_trackRecordVideo;
- (void)updateDraftTypeIfNeed;
- (void)cleanCacheAfterPublish:(long long)a0;
- (void)changeBrushEditState:(long long)a0;
- (void)beginTakePhotoWorkFlow;
- (void)configUploadImageResource:(id)a0;
- (void)buildCamera;
- (void)deleteAll;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)changeToState:(long long)a0;

@end
