@class NSArray, IESLiveInteractiveUserServiceConfig, NSString;
@protocol IESLiveInteractiveGuestUserServiceDelegate, IESLiveInteractUserModel;

@interface IESLiveInteractiveGuestUserService : NSObject <HTSLiveMessageSubscriber, IESLiveInteractiveLinkServiceDelegate>

@property (retain, nonatomic) NSArray *currentRoomInteractList;
@property (retain, nonatomic) NSArray *oppositeRoomInteractList;
@property (nonatomic) unsigned long long oldCurrentVersion;
@property (nonatomic) unsigned long long oldOppositeVersion;
@property (retain, nonatomic) IESLiveInteractiveUserServiceConfig *config;
@property (weak, nonatomic) id<IESLiveInteractiveGuestUserServiceDelegate> delegate;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> currentGuest;
@property (nonatomic) BOOL oppositeRoomSilence;
@property (nonatomic) BOOL isInCurrentScene;
@property (nonatomic) unsigned long long currentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)allDelegates;
- (id)initWithConfig:(id)a0 diContext:(id)a1;
- (id)userByUserId:(id)a0;
- (void)onReceivedLinkedListChangeMessage:(id)a0;
- (id)userByLinkmicId:(id)a0;
- (id)userBySecUserId:(id)a0;
- (void)onReceivedDisableAudienceMessage:(id)a0;
- (void)onReceivedLinkEnterMessage:(id)a0;
- (void)onReceivedLinkLeaveMessage:(id)a0;
- (void)onReceivedLinkUpdateUserMessage:(id)a0;
- (void)onReceivedCrossRoomUpdateMessage:(id)a0;
- (id)userByRole:(int)a0;
- (id)currentRoomUserByLinkmicId:(id)a0;
- (BOOL)isOppositeRoomGuest:(id)a0;
- (id)oppositeRoomUserByLinkmicId:(id)a0;
- (id)guestByUserID:(id)a0;
- (void)updateRoomInteractListWithLinkerContentMap:(id)a0;
- (void)removeListForGuest;
- (void)onReceivedLinkerContributeMessage:(id)a0;
- (BOOL)isValidScene:(unsigned long long)a0;
- (void)updateRoomInteractList:(id)a0 linkerContentMap:(id)a1 currentVersion:(unsigned long long)a2;
- (void)notifyMultiRoomInteractiveListUpdate2Delegates;
- (void)notifyLinkEnterOrUpdate2Delegates:(BOOL)a0;
- (BOOL)updateOppositeRoomInteractList:(id)a0;
- (void)notifyOtherRoomInteractiveSilenceUpdate2Delegates;
- (void)onMuteWithLinkMessgae:(id)a0;
- (BOOL)isMuteByOthersWithFromUid:(id)a0 toUid:(id)a1;
- (void)notifyOnGuestMute:(BOOL)a0;
- (void)ackMessage:(id)a0;
- (BOOL)shouldUseRealScoreWithGuestID:(id)a0 contributorList:(id)a1;
- (BOOL)checkVersion:(unsigned long long)a0 currentRoom:(BOOL)a1;
- (void)updateCurrentRoomInteractListBackgroundStatus;
- (void)updateCurrentUserPosition;
- (void)updateScoreWithGuest:(id)a0;
- (void)updateOppositeRoomInteractListBackgroundStatus;
- (void)setupGuestScore;
- (id)alogDescFromDelegatesList:(id)a0;
- (id)allActivedList;
- (id)me;
- (void).cxx_destruct;
- (void)removeAll;
- (void)messageReceived:(id)a0;

@end
