@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IESLiveStrategyTrace : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableHistory;
@property (nonatomic) BOOL enableCloudFeatureTrace;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSMutableDictionary *characterMap;
@property (retain, nonatomic) NSMutableDictionary *factorMap;
@property (retain, nonatomic) NSMutableDictionary *testRuleMap;
@property (retain, nonatomic) NSMutableDictionary *hitRuleMap;
@property (retain, nonatomic) NSMutableDictionary *historyMap;
@property (retain, nonatomic) NSMutableDictionary *cloudFeatureMap;
@property (retain, nonatomic) NSMutableDictionary *cloudFeatureHitMap;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double lastReportTs;
@property (nonatomic) long long count;

+ (id)shared;

- (void)appWillTerminate;
- (void)getCloudFeature:(id)a0 hasValue:(BOOL)a1;
- (void)updateFeature:(id)a0 ts:(long long)a1;
- (void)updateFactor:(id)a0 ts:(long long)a1;
- (void)testStrategyRule:(id)a0 ts:(long long)a1;
- (void)hitStrategyRule:(id)a0 factor:(id)a1 ts:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground;
- (void)reportEvent;

@end
