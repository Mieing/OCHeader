@class HMDOTTrace, NSString, NSArray, NSDictionary;

@interface HMDOTSpan : NSObject <HMDRecordStoreObject>

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (copy, nonatomic) NSString *traceID;
@property (nonatomic) unsigned long long threadID;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *operationName;
@property (copy, nonatomic) NSString *spanID;
@property (weak, nonatomic) HMDOTTrace *trace;
@property (copy, nonatomic) NSString *parentID;
@property (copy, nonatomic) NSString *referenceID;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long finishTimestamp;
@property (copy) NSArray *logs;
@property (copy) NSDictionary *tags;
@property (nonatomic) unsigned long long isFinished;
@property (nonatomic) BOOL isInstant;
@property (nonatomic) unsigned long long category;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isMovingLine;
@property (copy, nonatomic) NSString *traceParent;
@property (nonatomic) unsigned long long needReferenceOtherLog;
@property (copy) NSString *latestChildSpanID;
@property (weak) HMDOTSpan *parentSpan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startSpanOfTrace:(id)a0 operationName:(id)a1;
+ (id)startSpan:(id)a0 childOf:(id)a1;
+ (unsigned long long)cleanupWeight;
+ (id)reportDataForRecords:(id)a0;
+ (id)bg_ignoreKeys;
+ (id)startSpan:(id)a0 childOf:(id)a1 spanStartDate:(id)a2;
+ (unsigned long long)currentThreadID;
+ (id)startSpanOfTrace:(id)a0 operationName:(id)a1 spanStartDate:(id)a2;
+ (id)startSpanOfTrace:(id)a0 WithConfig:(id)a1;
+ (id)startSpanOfParentSpan:(id)a0 WithConfig:(id)a1;
+ (id)startSpanOfReferance:(id)a0 SpanWithConfig:(id)a1;
+ (id)startSpan:(id)a0 referenceOf:(id)a1;
+ (id)createSpanWithConfig:(id)a0;
+ (id)tableName;
+ (id)newRecord;

- (void)setTag:(id)a0 value:(id)a1;
- (void)resetSpanStartDate:(id)a0;
- (void)finishWithEndDate:(id)a0;
- (id)getTraceParent;
- (void)writeSpanIfNeedWithNeedReplace:(BOOL)a0;
- (void)logMessage:(id)a0 fields:(id)a1;
- (void)insertPlaceHolderIfNeeded;
- (void)finishWithErrorMsg:(id)a0;
- (void)setMovingLineCategory:(unsigned long long)a0 type:(unsigned long long)a1 data:(id)a2 extra:(id)a3 AndEndDate:(id)a4;
- (void).cxx_destruct;
- (void)logError:(id)a0;
- (void)finish;
- (void)finishWithError:(id)a0;
- (void)dealloc;
- (id)reportDictionary;
- (void)logErrorWithMessage:(id)a0;

@end
