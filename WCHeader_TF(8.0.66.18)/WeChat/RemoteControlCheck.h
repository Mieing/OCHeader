@class NSString;

@interface RemoteControlCheck : MMRootService <WCAudioSessionExt, MMServiceProtocol> {
    BOOL mIsCondRecordCheck;
    BOOL mIsForceRecordCheck;
    BOOL mIsRecordCheckEnabled;
    BOOL mIsRecordMayStart;
    BOOL mIsPlayCheckEnabled;
    BOOL mIsReceiveRemoteEvents;
}

@property (nonatomic) BOOL isTingChecking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)CanRecord;
- (void)plugin_on;
- (void)plugin_off;
- (void)realBeginReceiveRemoteControlEvent;
- (void)beginReceiveRemoteControlEvent:(unsigned int)a0;
- (void)realEndReceiveRemoteControlEvent;
- (void)endReceiveRemoteControlEvent:(unsigned int)a0;
- (void)registerNotify;
- (void)unregisterNotify;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange;
- (void)onWCAudioSessionOverride;
- (BOOL)IsOpenRemoteControl;
- (BOOL)IsSoundPlaying;
- (void)dealloc;
- (void)startRecordCheckIfOpenRC;
- (void)stopRecordCheckIfOpenRC;
- (void)startRecordCheck;
- (void)stopRecordCheck;
- (BOOL)isRecordChecking;
- (void)startPlayCheck;
- (void)stopPlayCheck;
- (BOOL)isPlayChecking;
- (void)startTingCheck;
- (void)stopTingCheck;
- (void)HandleRemoteControlEvent:(id)a0;

@end
