@class NSString;

@interface WMPFManager : NSObject <WMPFVideoAPIProtocol, WMPFAudioAPIProtocol, WMPFLivePlayerAPIProtocol, WMPFLivePusherAPIProtocol, WMPFAppTaskAPIProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)innerAppAudioInterruptionBegan;
- (void)innerAppAudioInterruptionEnd;
- (void)audioSessionInterruptionBegan;
- (void)audioSessionInterruptionEnd;
- (void)pauseLivePlay;
- (void)resumeLivePlay;
- (void)pauseLivePush;
- (void)resumeLivePush;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)muteVideo:(BOOL)a0;
- (void)onWeAppServiceClosed;

@end
