@class MMLiveSEIConnectMicMsg, NSMutableDictionary, NSString, MMLiveAudioRoomSEIConnectMicMsg, WCFinderDataItem, MMFinderLiveConnectMicUsersInfo, NSMutableArray;
@protocol MMFinderLiveCDNPlayerMicLogicDelegate;

@interface MMFinderLiveCDNPlayerMicLogic : NSObject

@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long audioRoomScene;
@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *lastMicUsersInfoBeforeMinimize;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) NSMutableDictionary *lastMicUsersDicFromServer;
@property (retain, nonatomic) NSMutableArray *lastConnectMicUserInfoListFromSEI;
@property (retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo;
@property (retain, nonatomic) NSString *anchorSdkUserId;
@property (nonatomic) BOOL isInCgiProcess;
@property (nonatomic) BOOL shouldGetMicUsersAfterCgiProcess;
@property (nonatomic) unsigned int cgiRequestNextTime;
@property (nonatomic) BOOL hasUnknownMicUser;
@property (nonatomic) BOOL canUseNewMicSEI;
@property (retain, nonatomic) MMLiveSEIConnectMicMsg *seiMicMsgInfo;
@property (retain, nonatomic) NSMutableDictionary *isOtherRoomMicAnchorAudioModeDict;
@property (nonatomic) BOOL isFitRenderMode;
@property (retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomSeiMicMsgInfo;
@property (weak, nonatomic) id<MMFinderLiveCDNPlayerMicLogicDelegate> actionDelegate;
@property (nonatomic) BOOL isVideoLandscapeMode;
@property (readonly, nonatomic) BOOL isAudioRoomMode;
@property (nonatomic) unsigned long long cdnPlayerViewScene;

- (id)initWithFinderDataItem:(id)a0 commentScene:(int)a1;
- (void)checkLiveMicInfo:(id)a0;
- (void)handleNewPkMicInfos:(id)a0 withMicUserDictFromServer:(id)a1;
- (void)handleMicPkInfo:(id)a0 withMicUserDictFromServer:(id)a1;
- (void)clearLastMicUsersDicFromServer;
- (void)clearMicUsersInfoOnly;
- (void)clearMicUsersInfoOnlyWithForceClearFlag:(BOOL)a0;
- (void)updateHasUnknownMicUserAfterClearList;
- (void)clearMicUsersList;
- (void)clearMicUsersListWithForceClearFlag:(BOOL)a0;
- (void)checkAndUpdateConnectMicUsersListWithOldVersionSeiMsg;
- (void)checkAndUpdateConnectMicUsersList;
- (void)checkAndUpdateAudioRoomMicUsersList;
- (void)tryGetMicUsersFromServer:(BOOL)a0 getExtraAutoSwipeInfo:(BOOL)a1;
- (void)wrapTryGetMicUsersFromServer:(id)a0;
- (void)checkAndGetMicUsersAfterDelay:(BOOL)a0;
- (BOOL)receiveOldVersionSeiMsg:(id)a0;
- (BOOL)receiveSeiConnectMicMsg:(id)a0;
- (id)updateOtherMicAnchorUserIsAudioMode:(BOOL)a0 sdkUserId:(id)a1;
- (void)updateIsFitRenderMode:(BOOL)a0;
- (void)clearSeiData;
- (void)updateAudioRoomScene:(unsigned long long)a0;
- (BOOL)receiveAudioRoomSeiMicMsg:(id)a0;
- (void)updateAudioRoomListTalkingStatusWithSeiMicMsg:(id)a0;
- (void)updateWithLastMicUsersInfoBeforeMinimize:(id)a0 isVideoLandscapeMode:(BOOL)a1;
- (void).cxx_destruct;

@end
