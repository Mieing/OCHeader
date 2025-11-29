@class NSString, NSArray, NSMutableDictionary;

@interface AWEStudioFormattedLogModel : NSObject

@property (copy, nonatomic) NSString *actionName;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) NSArray *parentTraceId;
@property (copy, nonatomic) NSString *threadName;
@property (nonatomic) double timeStamp;
@property (copy, nonatomic) NSString *errorMsg;
@property (retain, nonatomic) NSMutableDictionary *extraMsg;

+ (id)logModelWithActionName:(id)a0 actionType:(unsigned long long)a1 creationID:(id)a2 traceId:(id)a3 parentTraceIds:(id)a4 errorMsg:(id)a5 extraMsg:(id)a6;
+ (id)defaultThreadName;
+ (double)defaultTimeStamp;
+ (id)logModelWithActionName:(id)a0 actionType:(unsigned long long)a1 creationID:(id)a2 traceId:(id)a3 parentTraceIds:(id)a4 threadName:(id)a5 timeStamp:(double)a6 errorMsg:(id)a7 extraMsg:(id)a8;

- (id)formattedLog;
- (void).cxx_destruct;

@end
