@class NSString;

@interface TingPlayProcessActionReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int subAction;
@property (nonatomic) unsigned int playerKernelType;
@property (nonatomic) unsigned int listenType;
@property (nonatomic) unsigned int startScene;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *audioName;
@property (retain, nonatomic) NSString *audioUrl;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *playerId;
@property (retain, nonatomic) NSString *playSessionId;
@property (nonatomic) unsigned int timeFlag;
@property (nonatomic) unsigned int operatePosition;
@property (nonatomic) unsigned int audioDuration;
@property (nonatomic) unsigned int exptIdentification;
@property (nonatomic) unsigned int clientTimestampMs;
@property (nonatomic) unsigned int playerStartTimeCost;
@property (nonatomic) unsigned int hasPlayEnd;
@property (nonatomic) unsigned int hasPlayError;
@property (nonatomic) unsigned int stuckTimes;
@property (nonatomic) unsigned int playTaskstopReason;
@property (nonatomic) unsigned int isPaused;
@property (nonatomic) unsigned int playerStopReason;
@property (nonatomic) unsigned int hasPlayStart;
@property (nonatomic) unsigned int isHitPreloadNext;
@property (nonatomic) BOOL isEnablePreloadNext;
@property (nonatomic) unsigned int qualityType;
@property (nonatomic) unsigned int initNetworkType;
@property (nonatomic) unsigned int isHls;
@property (nonatomic) BOOL enablePreloadAudioData;
@property (nonatomic) BOOL isHitDownloadedCache;
@property (nonatomic) BOOL isEnableAuditoryEnhance;
@property (nonatomic) BOOL isEnableHearingAid;

+ (void)initialize;

@end
