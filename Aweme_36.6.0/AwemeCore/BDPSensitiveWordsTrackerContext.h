@class NSString, NSMutableDictionary, NSDictionary, NSArray, NSMutableArray;

@interface BDPSensitiveWordsTrackerContext : NSObject

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *launchFrom;
@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long detectCount;
@property (nonatomic) long long detectHasSensitiveCount;
@property (retain, nonatomic) NSMutableDictionary *inputParam;
@property (nonatomic) BOOL hasFondSensitiveWord;
@property (retain, nonatomic) NSMutableArray *hitWordList;
@property (nonatomic) unsigned short checkScene;
@property (nonatomic) unsigned long long textCheckStatus;
@property (retain, nonatomic) NSDictionary *hitTablesFilters;
@property (nonatomic) double clientAIStrategyExecStartTs;
@property (nonatomic) double clientAIStrategyExecExecDuration;
@property (nonatomic) double buildDuration;
@property (nonatomic) BOOL isACTrieEnable;
@property (nonatomic) BOOL isSensitiveDetectEnable;
@property (nonatomic) BOOL isEncodeKeyEnable;
@property (nonatomic) BOOL isResourceEnable;
@property (nonatomic) int memoryWarningLevel;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) double shotDuration;
@property (copy, nonatomic) NSString *screenPic;
@property (nonatomic) double popupDetectDuration;
@property (nonatomic) BOOL anomalyPopup;
@property (copy, nonatomic) NSArray *hyperLinkList;

- (void)reportSecurityEvent:(id)a0 uniqueID:(id)a1;
- (void)reportSecurityDetectionBussinessEvent:(id)a0 uniqueID:(id)a1;
- (void)beginCheckSensitiveWordWithTextFrom:(id)a0;
- (void)endCheckSensitiveWordWithCheckResult:(id)a0 path:(id)a1 checkScene:(unsigned short)a2 textFrom:(id)a3;
- (void)beginCheckClientAISensitiveWordDetectStrategy;
- (void)endCheckClientAISensitiveWordDetectStrategy:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSchema:(id)a0;

@end
