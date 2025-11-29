@class NSString;
@protocol IESLiveOpenPlatformShareScreenStrategy;

@interface IESLiveOpenPlatformShareScreenController : NSObject <IESLiveGameOpenPlatformShareScreenActions, IESLiveGameOpenPlatformAppInstanceLifeCycleObserver>

@property (nonatomic) double shareScreenStartTimeInterval;
@property (nonatomic) BOOL isInSharing;
@property (nonatomic) BOOL hasFirstClosed;
@property (retain, nonatomic) id<IESLiveOpenPlatformShareScreenStrategy> currentStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)shareScreenDidStartWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidStopWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 extra:(id)a3;
- (void)shareScreenDidFailToStartWithAppId:(id)a0 containerType:(long long)a1 error:(id)a2;
- (void)shareScreenDidFailToStopWithAppId:(id)a0 containerType:(long long)a1 error:(id)a2;
- (void)updateAnchorPreviewLayout;
- (void)sendFrameBufferToAppId:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)isCurrentInSharing;
- (long long)currentUIStatus;
- (void)anchorScreenStatusChange:(long long)a0;
- (void)appInstance:(id)a0 didSwitchStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (BOOL)_validateStrategy:(id)a0;
- (BOOL)_validateAppId:(id)a0;
- (void)_trackShareScreenDuration;
- (void)openShareScreenGuidePanelWithStrategy:(id)a0 cancelCallback:(id /* block */)a1 confirmCallback:(id /* block */)a2;
- (void)startShareScreenWithStrategy:(id)a0 callback:(id /* block */)a1;
- (void)stopShareScreenWithCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
