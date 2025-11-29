@class NSLock, NSString, NSDictionary, NSNumber, NSMutableArray;

@interface HMDOTTrace : NSObject <HMDRecordStoreObject> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _cacheUnHitLock;
}

@property (nonatomic) unsigned long long localID;
@property (nonatomic) unsigned long long sequenceCode;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *traceID;
@property (nonatomic) long long startTimestamp;
@property (nonatomic) long long finishTimestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *updateVersionCode;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long isFinished;
@property (nonatomic) unsigned long long hitRules;
@property (retain, nonatomic) NSNumber *sampleRate;
@property BOOL isForcedUpload;
@property (copy) NSDictionary *tags;
@property BOOL needCache;
@property BOOL isAbandoned;
@property (retain, nonatomic) NSMutableArray *cachedSpans;
@property (retain, nonatomic) NSMutableArray *spanIdList;
@property (retain, nonatomic) NSLock *cacheLock;
@property (retain, nonatomic) NSLock *idListLock;
@property (nonatomic) unsigned long long insertMode;
@property (nonatomic) BOOL isMovingLine;
@property (copy, nonatomic) NSString *traceType;
@property (retain, nonatomic) NSMutableArray *cacheUnHitSpans;
@property (nonatomic) unsigned long long hasError;
@property (copy) NSString *latestSpanID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bg_ignoreKeys;
+ (id)startTrace:(id)a0;
+ (id)startTrace:(id)a0 startDate:(id)a1 insertMode:(unsigned long long)a2;
+ (void)enableDebugUpload;
+ (void)uploadCache;
+ (id)startTraceWithConfig:(id)a0;
+ (id)startTrace:(id)a0 startDate:(id)a1;
+ (void)ignoreUnfinishedTraceAssert;
+ (id)tableName;

- (void)setTag:(id)a0 value:(id)a1;
- (void)resetTraceStartDate:(id)a0;
- (void)finishWithDate:(id)a0;
- (void)abandonCurrentTrace;
- (BOOL)needCacheUnHit;
- (id)obtainSpansUnHit;
- (id)obtainSpanIDList;
- (void)cacheOneSpan:(id)a0;
- (void)cacheOneSpanUnHit:(id)a0;
- (void)addOneSpanID:(id)a0;
- (id)allCachedSpans;
- (void)updateHitRules;
- (id)initWithTraceConfig:(id)a0;
- (void)decideInsertPolicy;
- (void)decideInsertPolicyWithMode:(unsigned long long)a0;
- (void)finishAfterDelay:(double)a0;
- (void)cacheCallbackSpans:(id)a0;
- (id)obtainTraceTags;
- (void).cxx_destruct;
- (void)finish;
- (void)dealloc;
- (id)reportDictionary;

@end
