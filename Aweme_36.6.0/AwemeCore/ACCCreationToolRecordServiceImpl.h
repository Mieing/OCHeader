@class AUCDTOBasicCamera, NSString, ACCGroupedPredicate, AWEVideoPublishViewModel;
@protocol ACCRepoCreationToolData, IESServiceProvider;

@interface ACCCreationToolRecordServiceImpl : NSObject <ACCCreationToolRecordService>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCRepoCreationToolData> creationTool;
@property (retain, nonatomic) AUCDTOBasicCamera *basicConfig;
@property (retain, nonatomic) ACCGroupedPredicate *shouldPhotoPressTapToVideo;
@property (retain, nonatomic) ACCGroupedPredicate *shouldShowPressTapVideoTips;
@property (retain, nonatomic) ACCGroupedPredicate *shouldCreationRecordAcceptBriefActionToPhoto;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPublishModel:(id)a0;
- (BOOL)isSupportPhotoAndVideoModeUIWithMainCaptureStatus;
- (BOOL)creationMediaTypeIsOnlyPhoto;
- (BOOL)creationMediaTypeIsSegment;
- (BOOL)isSupportPressToVideo;
- (BOOL)inOpenCreativePath;
- (BOOL)isNeedBlockLightningStyle;
- (void)updateMinAndMaxRecordDuration;
- (BOOL)mustNeedMicphoneCanRecord;
- (void).cxx_destruct;

@end
