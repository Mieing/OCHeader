@class NSString, NSArray, NSDictionary;

@interface IESECPerfSession : NSObject

@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSArray *stageList;
@property (copy, nonatomic) NSString *curStage;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasLeave;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *dynamicParams;

+ (id)trackingQueue;

- (void)p_updateCommonParamsWithStage:(id)a0;
- (void)p_reportStageInfo;
- (void)p_addCommonParams:(id)a0;
- (void)p_addDynamicParams:(id)a0;
- (id)copySessionWithStage:(id)a0;
- (void)writeSessionStage:(id)a0 stageType:(id)a1 timestamp:(double)a2 extraData:(id)a3;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

@end
