@class NSString;

@interface VoIPPushKitNotifyService : MMUserService <MMKernelExt, MMServiceProtocol>

@property (nonatomic) BOOL useVoIPLCK;
@property (nonatomic) BOOL isInBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isVoIPLCKAvailable;
+ (BOOL)getIfCanUseCX:(BOOL)a0 isMultiTalk:(BOOL)a1;
+ (BOOL)getIfHaveAProcess;
+ (BOOL)isDeviceCallkitAvailable;
+ (BOOL)isAppStateActive;
+ (BOOL)getCallkitSwitchFromService;
+ (BOOL)isCallkitAvailable;
+ (BOOL)getIfCallWithID:(id)a0 isVideoMode:(BOOL)a1;
+ (BOOL)haveAnsweredCall;
+ (id)getRingToneSoundForCaller:(id)a0;
+ (BOOL)isProcessWithRoom:(unsigned long long)a0;
+ (BOOL)canHandleVoIPPushInfo:(id)a0 type:(id)a1;
+ (id)displayNameWithInviteTips:(id)a0 isMultiply:(BOOL)a1 isVideo:(BOOL)a2;
+ (id)getDisplayName:(id)a0 VoIPPushInfo:(id)a1;
+ (BOOL)handleVoIPPushInfoContent:(id)a0 VoIPPushInfo:(id)a1 type:(id)a2 completion:(id /* block */)a3;

- (void)sendOpenLCKExpt;
- (void)__sendOpenLCKExpt;
- (void)onServiceInit;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (id)getUserName;
- (void)reportCallEnded:(unsigned long long)a0;
- (BOOL)getIsVideo;
- (BOOL)getIsMultiTalk;
- (void)requestAcceptCallWithRoom:(unsigned long long)a0;
- (void)reportIncomingCallFromUser:(id)a0 ofType:(int)a1 withMsg:(id)a2 isPushKit:(BOOL)a3 isMultitalk:(BOOL)a4;
- (void)resetStatus;
- (void)resetStatusWithRoomID:(unsigned long long)a0;
- (void)forceEnd;
- (void)forceClose;

@end
