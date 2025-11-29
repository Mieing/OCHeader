@class NSString, NSDictionary;

@interface IESLivePKGuestTrackerContext : NSObject <IESLivePKStateAction>

@property (nonatomic) double interactModeStartTime;
@property (nonatomic) double connectStartTime;
@property (nonatomic) double cameraStartTime;
@property (nonatomic) long long cameraDuration;
@property (nonatomic) double talkBeginTime;
@property (nonatomic) double talkDurationTime;
@property (nonatomic) double watchGuestStartTime;
@property (nonatomic) double pkConnectStartTime;
@property (nonatomic) double pkCameraStartTime;
@property (nonatomic) double pkCameraDuration;
@property (nonatomic) double pkTalkBeginTime;
@property (nonatomic) double pkTalkDurationTime;
@property (nonatomic) BOOL onPKCounting;
@property (nonatomic) BOOL onPunishCounting;
@property (nonatomic) BOOL isInvite;
@property (copy, nonatomic) NSString *connectType;
@property (nonatomic) BOOL addedToAlternateList;
@property (copy, nonatomic) NSString *fromUserID;
@property (copy, nonatomic) NSString *fromUserType;
@property (nonatomic) BOOL isAutoJoin;
@property (copy, nonatomic) NSString *breakPage;
@property (nonatomic) double applyTime;
@property (nonatomic) double invitedTime;
@property (nonatomic) double sucConnectTime;
@property (nonatomic) long long waitingDuration;
@property (retain, nonatomic) NSDictionary *waitingOffsetInfo;
@property (nonatomic) BOOL isFirstConnectSuc;
@property (nonatomic) double pkGuestStartTime;
@property (nonatomic) double pkGuestDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)didChangePKStateFrom:(long long)a0 to:(long long)a1;
- (long long)guestDurationForTrack;
- (void)unloadOwnSlots;
- (void)loadOwnSlots;
- (void)resetPKGuestContext:(BOOL)a0;
- (void)resetPKDurationContext;
- (void)onConnectModeSwitch:(BOOL)a0;
- (void)onUserSpeaking:(BOOL)a0;
- (BOOL)shouldCountPKDuration;
- (void).cxx_destruct;

@end
