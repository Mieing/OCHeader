@class NSString, GPBInt64Int64Dictionary, NSMutableArray, GPBInt64ObjectDictionary;

@interface LotteryInfoRedisCache : IESLivePBBaseMessage

@property (nonatomic) long long lotteryId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) long long roomId;
@property (nonatomic) int liveId;
@property (nonatomic) int appId;
@property (nonatomic) int ownerType;
@property (nonatomic) int status;
@property (nonatomic) long long lastStatusChangeAt;
@property (nonatomic) int lotteryType;
@property (copy, nonatomic) NSString *awardName;
@property (nonatomic) long long awardCount;
@property (nonatomic) int luckyCount;
@property (nonatomic) int realLuckyCount;
@property (nonatomic) int totalLuckyCount;
@property (nonatomic) long long totalGrantCount;
@property (nonatomic) long long withdrawCount;
@property (nonatomic) int countDown;
@property (nonatomic) long long startTime;
@property (nonatomic) long long drawTime;
@property (nonatomic) long long realDrawTime;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long version;
@property (nonatomic) long long flag;
@property (copy, nonatomic) NSString *serverBizData;
@property (copy, nonatomic) NSString *clientBizData;
@property (copy, nonatomic) NSString *uiConfig;
@property (copy, nonatomic) NSString *systemData;
@property (nonatomic) long long bizLineSet;
@property (retain, nonatomic) NSMutableArray *conditionsArray;
@property (readonly, nonatomic) unsigned long long conditionsArray_Count;
@property (nonatomic) BOOL enabledDilatation;
@property (nonatomic) BOOL dilatationFinal;
@property (nonatomic) long long awardCountDilatationFinal;
@property (nonatomic) long long luckyCountDilatationFinal;
@property (copy, nonatomic) NSString *dilatationConfigDetail;
@property (nonatomic) long long awardCountBeforeDilatation;
@property (nonatomic) long long luckyCountBeforeDilatation;
@property (nonatomic) int luckyRecordShardingNum;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardServerBizData;
@property (readonly, nonatomic) unsigned long long extraAwardServerBizData_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardUiConfig;
@property (readonly, nonatomic) unsigned long long extraAwardUiConfig_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardClientBizData;
@property (readonly, nonatomic) unsigned long long extraAwardClientBizData_Count;
@property (retain, nonatomic) GPBInt64Int64Dictionary *extraAwardLuckyCount;
@property (readonly, nonatomic) unsigned long long extraAwardLuckyCount_Count;

+ (id)descriptor;

@end
