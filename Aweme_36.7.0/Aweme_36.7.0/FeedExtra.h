@class NSString, FeedExtra_TopButton, FeedExtra_LogPb, Banner, RankRoundBanner, NSMutableArray;

@interface FeedExtra : IESLivePBBaseMessage

@property (retain, nonatomic) FeedExtra_LogPb *logPb;
@property (nonatomic) BOOL hasLogPb;
@property (retain, nonatomic) FeedExtra_TopButton *topButton;
@property (nonatomic) BOOL hasTopButton;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long isBackup;
@property (nonatomic) long long cost;
@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (nonatomic) long long total;
@property (retain, nonatomic) Banner *banner;
@property (nonatomic) BOOL hasBanner;
@property (retain, nonatomic) RankRoundBanner *rankRoundBanner;
@property (nonatomic) BOOL hasRankRoundBanner;
@property (copy, nonatomic) NSString *unreadExtra;
@property (nonatomic) long long style;
@property (nonatomic) long long offset;
@property (nonatomic) int offsetType;
@property (copy, nonatomic) NSString *aggregateColumnName;
@property (nonatomic) BOOL forbidInterpose;
@property (nonatomic) BOOL directSort;
@property (copy, nonatomic) NSString *satiParamForPitaya;
@property (copy, nonatomic) NSString *userExtraInfo;
@property (nonatomic) long long followSessionId;
@property (copy, nonatomic) NSString *previewCardAreaTitle;
@property (nonatomic) int previewCardContentCategory;
@property (copy, nonatomic) NSString *maxTimeStr;
@property (copy, nonatomic) NSString *needImpressionGids;
@property (copy, nonatomic) NSString *personalStrategy;
@property (copy, nonatomic) NSString *finishToast;
@property (retain, nonatomic) NSMutableArray *needPushAnchorIdsArray;
@property (readonly, nonatomic) unsigned long long needPushAnchorIdsArray_Count;
@property (copy, nonatomic) NSString *createSchema;
@property (copy, nonatomic) NSString *createButtonText;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isModuleSubscribe;
@property (nonatomic) long long searchOffset;

+ (id)descriptor;

@end
