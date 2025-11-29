@class FinderLiveBackendPeriodSeiInfo, FinderLiveNpsSurveyTask, FinderLiveBubbleInfo, FinderLiveCheerInfo, FinderLiveNoticeBubbleInfo, FinderLiveRealnameLikeBubbleInfo, FinderJumpInfo, NSMutableArray, FinderLiveMicInfo, FinderLiveContact;

@interface MMFinderLiveGetLiveMessageRespContext : NSObject

@property (nonatomic) unsigned int isHistoryMsg;
@property (retain, nonatomic) NSMutableArray *enableExtraSyncCmds;
@property (retain, nonatomic) NSMutableArray *notifyExtraSyncCmds;
@property (retain, nonatomic) NSMutableArray *disableExtraSyncCmds;
@property (retain, nonatomic) NSMutableArray *originalMsgList;
@property (retain, nonatomic) NSMutableArray *originalAppMsgList;
@property (retain, nonatomic) FinderLiveCheerInfo *cheerInfo;
@property (retain, nonatomic) FinderLiveMicInfo *liveMicInfo;
@property (retain, nonatomic) FinderLiveRealnameLikeBubbleInfo *realnameLikeBubbleInfo;
@property (retain, nonatomic) FinderLiveNoticeBubbleInfo *noticeBubbleInfo;
@property (retain, nonatomic) FinderLiveContact *anchorContact;
@property (nonatomic) BOOL isNeverJoinFanclub;
@property (retain, nonatomic) FinderLiveBubbleInfo *liveBubbleInfo;
@property (retain, nonatomic) FinderJumpInfo *playTogetherIconJumpInfo;
@property (retain, nonatomic) FinderLiveBackendPeriodSeiInfo *backendSeiInfo;
@property (nonatomic) unsigned long long curForwardCount;
@property (retain, nonatomic) FinderLiveNpsSurveyTask *npsSurveyTask;

- (void).cxx_destruct;

@end
