@class NSString, NSMutableDictionary, NSArray, IESLiveLinkIntent;

@interface IESLiveLinkTask : NSObject <IESLiveLinkTaskProtocol, IESLiveLinkTaskInfo, IESLiveLinkTraceProtocol>

@property (retain, nonatomic) NSMutableDictionary *traceTempMetric;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) long long mode;
@property (nonatomic) long long qos;
@property (retain, nonatomic) NSArray *dependency;
@property (nonatomic) double overTime;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *nodeId;
@property (retain, nonatomic) IESLiveLinkIntent *intent;
@property (nonatomic) long long invokeState;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) long long dependencyException;
@property (copy, nonatomic) id /* block */ taskBlock;
@property (copy, nonatomic) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContextParam:(id)a0;
- (id)tracePrefix;
- (void).cxx_destruct;
- (void)clear;
- (void)run;
- (id)getSessionId;

@end
