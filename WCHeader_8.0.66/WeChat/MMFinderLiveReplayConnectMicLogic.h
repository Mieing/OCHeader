@class FinderLiveMicInfo;

@interface MMFinderLiveReplayConnectMicLogic : MMFinderLiveCDNPlayerMicLogic

@property (retain, nonatomic) FinderLiveMicInfo *lastLiveMicInfo;
@property (readonly, nonatomic) BOOL hasUnknownMicUser;

- (void)checkLiveMicInfo:(id)a0;
- (void)setIsVideoLandscapeMode:(BOOL)a0;
- (void)clearAllState;
- (id)anchorSdkUserId;
- (BOOL)canUseNewMicSEI;
- (BOOL)receiveOldVersionSeiMsg:(id)a0;
- (void)tryGetMicUsersFromServer:(BOOL)a0 getExtraAutoSwipeInfo:(BOOL)a1;
- (void).cxx_destruct;

@end
