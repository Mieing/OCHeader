@class UIView, NSString, XPlayScreenOn, CGCloudPlayerInfo, XPlayQualityStatsModel, CGCloudPlayerStatsModel, CGPerformanceMonitor, CGObject, UIViewController, CGXCloudPlayerControllerNativeWrapper, CGXExtensionManager;
@protocol CGDataChannel, CGRTCSEIMessageDelegate, XPlayStreamingParametersControllerProtocol, XPlayRenderProtocol, CGRTCRoom, XPlayCloudPlayerDelegate, CGLoadTimeMonitor, XPlayAudioCapture, XPlayDelayMonitor, CGNetworkMonitor, XPlayScreenRecordProtocol, CGCloudPlayerDelegate, XPlayAudioPuller, CGCloudPermission, XPlayKeyboardProtocol, CGMessageSDK, CGItem, XPlayCloudMessageProtocol;

@interface CGXCloudPlayer : NSObject <CGXCloudPlayerDelegate, XPlayCloudPlayerProtocol, CGCloudPlayer> {
    id<XPlayRenderProtocol> render;
    id<XPlayAudioPuller> audioPuller;
    id<XPlayAudioCapture> audioCapture;
    CGObject<CGRTCSEIMessageDelegate, XPlayDelayMonitor> *delayDetectMonitor;
    id<XPlayStreamingParametersControllerProtocol> resolution;
}

@property (weak, nonatomic) id<CGItem> item;
@property (retain, nonatomic) CGCloudPlayerInfo *info;
@property (nonatomic) BOOL didPlay;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL didLoadSuccess;
@property (retain, nonatomic) id<CGDataChannel> dataChannel;
@property (retain, nonatomic) XPlayScreenOn *screenOn;
@property (retain, nonatomic) CGXExtensionManager *extensionManager;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL needResumeWhenBecomeActive;
@property (nonatomic) BOOL isMute;
@property (retain, nonatomic) CGXCloudPlayerControllerNativeWrapper *cloudPlayerControllerNativeWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<XPlayCloudPlayerDelegate> delegate;
@property (readonly, nonatomic) id<XPlayAudioCapture> audioCapture;
@property (readonly, nonatomic) id<XPlayAudioPuller> audioPuller;
@property (readonly, nonatomic) id<XPlayRenderProtocol> render;
@property (readonly, nonatomic) id<XPlayStreamingParametersControllerProtocol> resolution;
@property (readonly, nonatomic) id<XPlayDelayMonitor> delayDetectMonitor;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) UIViewController *controller;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) XPlayQualityStatsModel *qualityStats;
@property (readonly, nonatomic) CGCloudPlayerStatsModel *playerStats;
@property (readonly, nonatomic) BOOL isMain;
@property (retain, nonatomic) id<CGMessageSDK> messageSDK;
@property (retain, nonatomic) id<CGCloudPermission> cloudPermission;
@property (readonly, nonatomic) id<CGRTCRoom> room;
@property (retain, nonatomic) CGPerformanceMonitor *performaceMonitor;
@property (retain, nonatomic) id<CGNetworkMonitor> networkDetect;
@property (retain, nonatomic) id<CGLoadTimeMonitor> loadTimeMonitor;
@property (retain, nonatomic) id<XPlayKeyboardProtocol> keyboard;
@property (retain, nonatomic) id<XPlayCloudMessageProtocol> customMessage;
@property (retain, nonatomic) id<XPlayCloudMessageProtocol> matchedCustomMessage;
@property (retain, nonatomic) id<XPlayScreenRecordProtocol> screenRecorder;
@property (weak, nonatomic) id<CGCloudPlayerDelegate> cloudPlayerDelegate;

+ (void)registerXPlay2Impl;

- (void)setAudioCapture:(id)a0;
- (void)onPlayerEvent:(long long)a0 value:(id)a1;
- (void)onPlayerStateChange:(long long)a0 current:(long long)a1;
- (void)setupCellularEnhancement:(id)a0 completion:(id /* block */)a1;
- (id)initWithDeprecatedEngine:(id)a0 item:(id)a1 cloudPlayerInfo:(id)a2;
- (void)stopVideoStreamAndQuitRoomFrom:(id)a0;
- (void)setDelayDetectMonitor:(id)a0;
- (void)setAudioPuller:(id)a0;
- (void)statusWillUpdate:(unsigned long long)a0 info:(id)a1;
- (void)pauseAtBeginIfNeeded;
- (void)internalAudioPullerEnabled:(BOOL)a0;
- (int)switchRemoteSimulcastStreamTypeWithIndex:(int)a0;
- (void)disableGestureRecognizer:(BOOL)a0;
- (void)setRTCRuntimeParameters:(id)a0;
- (void)setResolution:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (void)stop;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)startAudioCapture;
- (void)setVolume:(int)a0;
- (void)preload;
- (void)_applicationWillResignActive:(id)a0;
- (void)resume;
- (void)dealloc;
- (void)focus;
- (void)stopAudioCapture;
- (void)_applicationWillTerminate;
- (void)setMute:(BOOL)a0;
- (void)setRender:(id)a0;

@end
