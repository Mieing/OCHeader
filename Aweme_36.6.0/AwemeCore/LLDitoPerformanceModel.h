@class NSString, NSMutableDictionary, NSDictionary;

@interface LLDitoPerformanceModel : NSObject <LLDitoLogInfoProtocol>

@property (retain, nonatomic) NSMutableDictionary *stageMap;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *stage;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addStageTimes:(id)a0 withDuration:(double)a1;
- (id)fetchLogDescription;
- (id)fetchLogParams;
- (id)fetchDefaultPerformanceDictionary;
- (unsigned long long)logLevel;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (unsigned long long)logType;

@end
