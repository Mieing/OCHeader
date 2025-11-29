@class FinderLiveNpsSurveyTask, FinderLiveGameData, FinderLiveUserQuitLiveGuideInfo, FinderLocation, FinderLiveBadgeInfo, NSMutableArray, FinderLiveCheerInfo, FinderLiveFanClubInfo, FinderLivePromoteExtInfo, FinderLiveModModifyLiveCoverImageResponse, FinderLiveModeInfo, BaseResponse, FinderLiveBubbleInfo, FinderLiveMicInfo, FinderLiveBackendPeriodSeiInfo, FinderLiveContact, NSData, OnQualityChangeInfo, FinderGetLiveMsgResp_LiveIntercomMicInfo, FinderLiveAudienceEventInfo, FinderLiveInfo, FinderJumpInfo, FinderLiveExtFlag, FinderGetLiveMsgResp_LiveMsgClientConfig, FinderGetLiveMsgResp_ExtraClientConfig, FinderLivePreloadInfo, FinderLiveRealnameLikeBubbleInfo, FinderLiveNoticeBubbleInfo;

@interface FinderGetLiveMsgResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *onlineContacts;
@property (retain, nonatomic) NSMutableArray *msgList;
@property (retain, nonatomic) FinderLiveInfo *liveInfo;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int curOnlineCount;
@property (nonatomic) unsigned int liveInfoEnableFlag;
@property (nonatomic) unsigned int liveCloseFlag;
@property (retain, nonatomic) FinderLiveMicInfo *liveMicInfo;
@property (nonatomic) unsigned int liveMicInfoEnableFlag;
@property (nonatomic) unsigned int pkCloseFlag;
@property (nonatomic) unsigned int liveExtFlag;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (nonatomic) unsigned int curParticipantCount;
@property (retain, nonatomic) NSMutableArray *appMsgList;
@property (retain, nonatomic) NSMutableArray *templateInfoList;
@property (retain, nonatomic) FinderLiveBadgeInfo *badgeInfo;
@property (nonatomic) unsigned int nextRetryInterval;
@property (nonatomic) unsigned long long curLikeCnt;
@property (retain, nonatomic) NSMutableArray *badgeInfos;
@property (retain, nonatomic) FinderLiveGameData *liveGameData;
@property (retain, nonatomic) FinderGetLiveMsgResp_LiveMsgClientConfig *clientConfig;
@property (nonatomic) unsigned int isHistoryMsg;
@property (retain, nonatomic) NSMutableArray *enableExtraSyncCmds;
@property (retain, nonatomic) NSMutableArray *notifyExtraSyncCmds;
@property (retain, nonatomic) NSMutableArray *disableExtraSyncCmds;
@property (nonatomic) unsigned long long backendAnchorStatusFlag;
@property (nonatomic) BOOL isFanClubMember;
@property (retain, nonatomic) FinderLiveFanClubInfo *fanClubInfo;
@property (retain, nonatomic) FinderLiveAudienceEventInfo *audienceEventInfo;
@property (retain, nonatomic) FinderGetLiveMsgResp_LiveIntercomMicInfo *liveIntercomInfo;
@property (retain, nonatomic) FinderLivePromoteExtInfo *promoteExtInfo;
@property (retain, nonatomic) FinderLiveCheerInfo *cheerInfo;
@property (retain, nonatomic) FinderLiveExtFlag *liveExtFlagInfo;
@property (nonatomic) unsigned int liveClosePageDelayMs;
@property (retain, nonatomic) FinderLiveModModifyLiveCoverImageResponse *liveCoverImgModifyInfo;
@property (nonatomic) BOOL isFanClubSuperFans;
@property (retain, nonatomic) OnQualityChangeInfo *onQualityChangeInfo;
@property (retain, nonatomic) FinderLiveModeInfo *modeInfo;
@property (retain, nonatomic) FinderLiveRealnameLikeBubbleInfo *realnameLikeBubbleInfo;
@property (retain, nonatomic) FinderLiveUserQuitLiveGuideInfo *userQuitLiveGuideInfo;
@property (retain, nonatomic) NSData *getLiveOnlineMemberBuf;
@property (nonatomic) unsigned int ktvPlayerCount;
@property (retain, nonatomic) FinderLiveNoticeBubbleInfo *noticeBubbleInfo;
@property (retain, nonatomic) FinderLiveContact *anchorContact;
@property (nonatomic) BOOL isNeverJoinFanclub;
@property (retain, nonatomic) FinderLiveBubbleInfo *liveBubbleInfo;
@property (retain, nonatomic) FinderJumpInfo *playTogetherIconJumpInfo;
@property (retain, nonatomic) FinderLiveBackendPeriodSeiInfo *backendSeiInfo;
@property (retain, nonatomic) FinderLocation *location;
@property (nonatomic) unsigned long long curForwardCount;
@property (retain, nonatomic) FinderLiveNpsSurveyTask *npsSurveyTask;
@property (retain, nonatomic) FinderGetLiveMsgResp_ExtraClientConfig *extraClientConfig;

+ (void)initialize;

@end
