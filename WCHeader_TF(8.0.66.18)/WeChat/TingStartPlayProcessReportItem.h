@class NSString;

@interface TingStartPlayProcessReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int prepareCostMills;
@property (nonatomic) unsigned int checkSpamCostMills;
@property (nonatomic) unsigned int getLinkCostMills;
@property (nonatomic) unsigned int playCheckCostMills;
@property (nonatomic) unsigned int playerStartCostMills;
@property (nonatomic) unsigned int totalCostMills;
@property (nonatomic) BOOL isCheckSpamFromCache;
@property (nonatomic) BOOL isGetLinkFromCache;
@property (nonatomic) BOOL isEnablePrefetch;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int listenType;
@property (nonatomic) unsigned int categoryStartScene;
@property (nonatomic) unsigned int playerKernelType;
@property (retain, nonatomic) NSString *audioName;
@property (nonatomic) unsigned long long audioDuration;
@property (retain, nonatomic) NSString *playerId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isHitPreloadNext;
@property (nonatomic) BOOL isEnablePreloadNext;
@property (nonatomic) unsigned int exptIdentification;
@property (nonatomic) unsigned int qualityType;
@property (nonatomic) unsigned int initNetworkType;
@property (nonatomic) BOOL enableAsyncCheckSpam;
@property (nonatomic) BOOL enablePreloadAudioData;
@property (nonatomic) BOOL isHitDownloadedCache;

+ (void)initialize;

@end
