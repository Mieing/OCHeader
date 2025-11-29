@class NSString, IESLiveLayoutLandscapePreviewContainer, IESLiveGCDTimer;

@interface IESLiveLandscapeEnterInnerLiveService : IESLiveGeneralBaseService <IESLiveLandscapeEnterInnerLiveService, HTSLiveOrientationActions>

@property (nonatomic) BOOL fromLandscapeInnerLiveEnter;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) BOOL isPortrait;
@property (copy, nonatomic) NSString *keyID;
@property (nonatomic) BOOL enablePreviewStateConfig;
@property (nonatomic) BOOL alreadyToast;
@property (nonatomic) BOOL enableAutoRotate;
@property (nonatomic) long long orientationBeforePush;
@property (retain, nonatomic) IESLiveLayoutLandscapePreviewContainer *landscapePreviewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)didForceUpdateToOrientation:(long long)a0;
- (BOOL)enableLandscapePreviewState;
- (void)registerLandscapePreviewContainer;
- (BOOL)isLandscapeInnerLiveEnter;
- (void)checkAutoRotateIfNeed;
- (void)recordOrientationBeforePushVC:(long long)a0;
- (id)landscapeContainerComponentAllowList;
- (BOOL)needToast;
- (id)queryLandscapePreviewContainer;
- (void)clearSlideMontior;
- (id)createLandscapeInnerLiveBanner;
- (void)startSlideMontior;
- (void)triggerForbiddenSlideToast;
- (void).cxx_destruct;

@end
