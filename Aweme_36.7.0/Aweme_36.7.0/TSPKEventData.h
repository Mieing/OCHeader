@class TSPKFuseModel, NSString, NSDictionary, NSMutableArray, TSPKAPIModel;

@interface TSPKEventData : NSObject <NSCopying>

@property (retain, nonatomic) TSPKAPIModel *apiModel;
@property (nonatomic) double timestamp;
@property (nonatomic) double unixTimestamp;
@property (nonatomic) long long handleResultAction;
@property (retain, nonatomic) TSPKFuseModel *fuseModel;
@property (nonatomic) long long matchedRuleId;
@property (copy, nonatomic) NSString *matchedRuleName;
@property (copy, nonatomic) NSString *matchedRuleType;
@property (nonatomic) BOOL matchedRuleNeedFuse;
@property (nonatomic) BOOL isGrayScaleRule;
@property (copy, nonatomic) NSString *ruleEngineResult;
@property (nonatomic) long long ruleEngineAction;
@property (nonatomic) double timeGapToDetect;
@property (nonatomic) double timeDelay;
@property (nonatomic) long long detectTime;
@property (nonatomic) long long totalDetectTime;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSDictionary *extraInfoDic;
@property (retain, nonatomic) NSMutableArray *subEvents;
@property (retain, nonatomic) NSMutableArray *warningTypes;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (nonatomic) unsigned long long storeType;
@property (copy, nonatomic) NSString *appStatus;
@property (copy, nonatomic) NSString *topPageName;
@property (nonatomic) double timeLastDidEnterBackground;
@property (nonatomic) double timeLastWillEnterForeground;
@property (nonatomic) BOOL isReleased;
@property (nonatomic) BOOL isDelayClosed;
@property (retain, nonatomic) NSMutableArray *ruleExecuteResults;
@property (copy, nonatomic) NSDictionary *bpeaContext;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *customAnchorCaseId;
@property (copy, nonatomic) NSString *customAnchorStartDesc;
@property (copy, nonatomic) NSString *customAnchorStopDesc;
@property (copy, nonatomic) NSString *customAnchorStartTopPage;
@property (copy, nonatomic) NSString *customAnchorStopTopPage;

- (id)formatFilterDictionary;
- (id)formatDictionary;
- (void)addReleaseContextInfoWithEventData:(id)a0;
- (void)addReleaseContextInfoToDic:(id)a0;
- (BOOL)isCustomAnchorCheck;
- (id)formatDictionaryForAPIStatistics;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
