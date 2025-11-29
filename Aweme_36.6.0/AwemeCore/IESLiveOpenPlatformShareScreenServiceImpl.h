@class NSString, IESLiveOpenPlatformShareScreenController;

@interface IESLiveOpenPlatformShareScreenServiceImpl : NSObject <IESLiveOpenPlatformShareScreenService, IESLiveOpenPlatformShareScreenStorageService>

@property (retain, nonatomic) IESLiveOpenPlatformShareScreenController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateAnchorPreviewLayout;
- (BOOL)isValidScreenCastScene;
- (long long)getScreenCastGuideStatus;
- (void)updateScreenCastGuideStatus;
- (long long)getScreenCastOptStatusWithAppId:(id)a0;
- (void)updateScreenCastOptStatusWithAppId:(id)a0 status:(BOOL)a1;
- (BOOL)getScreenCastUseStatus;
- (void)updateScreenCastUseStatus;
- (void)openShareScreenGuidePanelWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 model:(id)a3 cancelCallback:(id /* block */)a4 confirmCallback:(id /* block */)a5;
- (void)startShareScreenWithAppId:(id)a0 containerType:(long long)a1 strategy:(unsigned long long)a2 model:(id)a3 callback:(id /* block */)a4;
- (void)stopShareScreenWithAppId:(id)a0 callback:(id /* block */)a1;
- (void)sendFrameBufferToAppId:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)isSupportShareScreen:(unsigned long long)a0;
- (unsigned long long)roomStrategy:(unsigned long long)a0;
- (BOOL)isCurrentInSharing;
- (long long)currentUIStatus;
- (void)anchorScreenStatusChange:(long long)a0;
- (id)_strategyWithAppId:(id)a0 strategy:(unsigned long long)a1 model:(id)a2 containerType:(long long)a3;
- (void).cxx_destruct;
- (id)currentStrategy;

@end
