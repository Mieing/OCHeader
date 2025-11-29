@class AWEIMMessageConversation, AFDMomentCameraBeautyViewModel, AWEIMExchangeCameraPublishViewModel, AWEIMExchangeCameraLocationViewModel, NSString, AFDMomentCameraFilterViewModel;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentCameraService;

@interface AWEIMExchangeCameraTraceViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL shouldShowPublishButton;
@property (nonatomic) BOOL shouldShowSendAnimation;
@property (nonatomic) BOOL shouldHideButtonWhenTextPanning;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL isRandonResult;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraService> cameraService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (weak, nonatomic) AWEIMExchangeCameraPublishViewModel *publishViewModel;
@property (weak, nonatomic) AFDMomentCameraFilterViewModel *filterViewModel;
@property (weak, nonatomic) AFDMomentCameraBeautyViewModel *beautyViewModel;
@property (weak, nonatomic) AWEIMExchangeCameraLocationViewModel *locationViewModel;
@property (nonatomic) BOOL isRandomBefore;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *entrance;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long serverMsgId;
@property (copy, nonatomic) NSString *paramsForActivity;
@property (nonatomic) BOOL isRandom;
@property (nonatomic) long long randomTimes;
@property (nonatomic) long long chatType;
@property (nonatomic) BOOL isOnlyLocation;
@property (nonatomic) long long groupBatchEnterCount;

- (void)bindObserver;
- (void)onComponentDidLoad;
- (void)trackExchangeImageCameraShootBeginWithSccess:(BOOL)a0;
- (void)traceRandomShow;
- (void)trackExchangeImageCameraAlbumOpen:(BOOL)a0;
- (void)trackExchangeImageCameraPublish;
- (void)trackExchangeImageCameraClick;
- (void)p_trackExchangeCameraLocationClicked;
- (id)p_getPhotoType;
- (id)getCommonTraceProperty;
- (void).cxx_destruct;

@end
