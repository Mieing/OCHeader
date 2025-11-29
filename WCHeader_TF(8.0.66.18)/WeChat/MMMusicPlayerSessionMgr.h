@class NSString;

@interface MMMusicPlayerSessionMgr : MMRootService <MMServiceProtocol, IRemoteControlCheckExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)beginNewMusicPlayerAudioSession:(id)a0;
- (void)endNewMusicPlayerAudioSession:(id)a0;
- (void)notifyNewPlayStateChange:(id)a0;
- (void)iRemoteControlCheckShouldPlay;
- (void)iRemoteControlCheckShouldPause;
- (void)iRemoteControlCheckShouldPlayOrPause;
- (void)iRemoteControlCheckShouldStop;
- (void)iRemoteControlCheckPluginOff;
- (void)iRemoteControlCheckShouldNextTrack;
- (void)iRemoteControlCheckShouldPrevTrack;

@end
