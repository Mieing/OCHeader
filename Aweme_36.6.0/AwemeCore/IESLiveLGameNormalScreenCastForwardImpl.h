@class IESLiveLGameScreenCastManager, BDLOCNativeGameInstance, NSTimer, NSString;
@protocol IESLiveOpenPlatformShareScreenService;

@interface IESLiveLGameNormalScreenCastForwardImpl : NSObject <IESLiveGameOpenPlatformShareScreenActions, IESLiveLGameScreenCastForwardProtocol>

@property (retain, nonatomic) NSTimer *backgroundTimer;
@property (nonatomic) struct __CVBuffer { } *tempPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lastPixelBufferLock;
@property (nonatomic) long long backgroundMinCount;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } backgroundMinCountLock;
@property (weak, nonatomic) BDLOCNativeGameInstance *gameInstance;
@property (weak, nonatomic) id<IESLiveOpenPlatformShareScreenService> shareScreenService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) IESLiveLGameScreenCastManager *screenCastManager;

- (void)didSetAttachingDIContext;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)appDidActive;
- (void)shareScreenWillStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidFailToStartWithAppId:(id)a0 containerType:(long long)a1 error:(id)a2;
- (void)sendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)changeRecordStatus:(BOOL)a0;
- (void)releasePixelBufferIfNeed;
- (void)releaseTempPixelBufferIfNeed;
- (BOOL)isLiveRecording;
- (struct CGSize { double x0; double x1; })getGameScreenCastSize;
- (id)setupOpenPlatformShareScreenModel;
- (void)sendFrameBuffer:(struct __CVBuffer { } *)a0 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 backgroundPush:(BOOL)a2;
- (void)stopBackgroundPush;
- (void)recordTempPixelBuffer:(struct __CVBuffer { } *)a0 isRelease:(BOOL)a1;
- (struct __CVBuffer { } *)getLastPixelBuffer;
- (void)cacheLastPixelBuffer;
- (void)startBackgroundPush;
- (void)lockSetBackgroundCount:(long long)a0;
- (long long)lockGetBackgroundCount;
- (void)handleEventViewWillDisappear;
- (void)updateCameraOpenStatus:(BOOL)a0;
- (void)startScreenCastIfNeed:(unsigned long long)a0;
- (void)stopGameScreenCastIfNeed;
- (void)sendEvent:(long long)a0 extra:(id)a1;
- (void).cxx_destruct;
- (void)enterBackground;
- (void)reset;
- (void)dealloc;
- (id)initWithInstance:(id)a0;

@end
