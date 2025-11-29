@interface FinderGetLiveMsgResp_LiveMsgClientConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int maxCommentCacheSize;
@property (nonatomic) unsigned int refreshCommentSizePerTime;
@property (nonatomic) unsigned int refreshCommentInterval;
@property (nonatomic) unsigned int historyRefreshCommentSizePerTime;
@property (nonatomic) unsigned int historyRefreshCommentInterval;
@property (nonatomic) unsigned int refreshCommentIntervalMs;
@property (nonatomic) unsigned int minimunShowMsgLikeCnt;
@property (nonatomic) unsigned int doubleSpeedCnt;
@property (nonatomic) BOOL isSpeedDifference;
@property (nonatomic) unsigned int refreshCommentIntervalMsNew;
@property (nonatomic) unsigned int refreshCommentSizePerTimeNew;
@property (nonatomic) unsigned int commentMoveSpeedMs;
@property (nonatomic) BOOL hasSpeedCache;
@property (nonatomic) unsigned int refreshCommentSizePerTimeIos;
@property (nonatomic) unsigned int horizontalCommentDisplayTimeMs;
@property (nonatomic) unsigned int horizontalCommentDisplayIntervalMs;
@property (nonatomic) unsigned int floatMsgRowNum;

+ (void)initialize;

@end
