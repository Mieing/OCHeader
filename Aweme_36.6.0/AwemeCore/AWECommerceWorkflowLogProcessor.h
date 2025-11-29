@class NSObject, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue, AWECommerceWorkflowLogHelper;

@interface AWECommerceWorkflowLogProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *traceDict;
@property (retain, nonatomic) NSMapTable *dataDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (retain, nonatomic) id<AWECommerceWorkflowLogHelper> helper;
@property (nonatomic) BOOL didStart;

+ (id)sharedInstance;

- (void)startWithHelper:(id)a0;
- (void)startTraceWithPrimaryKey:(id)a0 name:(id)a1 dataKey:(id)a2 traceKey:(id)a3 needRecordTrace:(BOOL)a4;
- (void)setCustomParamsWithPrimaryKey:(id)a0 customParams:(id)a1;
- (void)appendCustomParamsWithPrimaryKey:(id)a0 customParams:(id)a1;
- (void)appendTraceWithPrimaryKey:(id)a0 traceKey:(id)a1;
- (void)endTraceWithPrimaryKey:(id)a0 traceKey:(id)a1;
- (void)appendComponentTraceWithDataKey:(id)a0 componentKey:(id)a1 traceKey:(id)a2;
- (void)upLoadBackendLog;
- (void)startTraceWithPrimaryKey:(id)a0 dataKey:(id)a1 traceKey:(id)a2 needRecordTrace:(BOOL)a3;
- (void)upLoadLogWithData:(id)a0;
- (void)startTraceWithPrimaryKey:(id)a0 dataKey:(id)a1 traceKey:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
