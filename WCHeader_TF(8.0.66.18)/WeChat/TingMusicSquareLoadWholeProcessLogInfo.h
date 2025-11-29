@class NSString;

@interface TingMusicSquareLoadWholeProcessLogInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long enterTimeStamp;
@property (nonatomic) unsigned int sequence;
@property (nonatomic) unsigned int reason;
@property (nonatomic) BOOL useCppData;
@property (nonatomic) BOOL mergeItemReq;
@property (nonatomic) BOOL succeed;
@property (nonatomic) BOOL onlyRefreshPreload;
@property (nonatomic) unsigned int lineNum;
@property (nonatomic) BOOL hasTipsId;
@property (nonatomic) BOOL hasPreloadResp;
@property (nonatomic) BOOL tipsIdMatch;
@property (nonatomic) BOOL preloadComplete;
@property (nonatomic) BOOL hasPatchInfo;
@property (nonatomic) BOOL didApplyPatchInfo;
@property (nonatomic) BOOL hasCache;
@property (nonatomic) BOOL hasFirstPage;
@property (nonatomic) BOOL hasAllPage;
@property (nonatomic) BOOL respHasRedDot;
@property (retain, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned long long reddotPreloadVersion;
@property (nonatomic) unsigned long long reddotPreloadStatus;
@property (nonatomic) unsigned long long reddotHitPreload;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) unsigned long long timeCostMs;
@property (nonatomic) unsigned long long reddotPreloadScene;

+ (void)initialize;

@end
