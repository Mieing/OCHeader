@class NSString, NSMutableDictionary, NSDictionary, NSURL, NSTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface BDPLogTraceManager : NSObject <BDPLogTraceProtocol>

@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) BOOL isTraceEnable;
@property (nonatomic) long long uploadStrategy;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) double maxCacheTime;
@property (retain, nonatomic) NSDictionary *blockSettingKeyList;
@property (retain, nonatomic) NSMutableDictionary *blockServerKeyList;
@property (nonatomic) long long maxServerKeyBlockTime;
@property (retain, nonatomic) NSTimer *timeoutCheckTimer;
@property (nonatomic) long long maxSingleByte;
@property (nonatomic) long long maxBatchByte;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventProcessQueue;
@property (retain, nonatomic) NSMutableArray *eventCache;
@property (nonatomic) double lastUploadTime;
@property (retain, nonatomic) NSTimer *uploadCheckTimer;
@property (retain, nonatomic) NSMutableArray *eventDicCache;
@property (nonatomic) long long totalCachedBytes;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)traceWith:(id)a0;
- (BOOL)enableTraceMonitor;
- (void)uploadEvents:(id)a0;
- (void)setupUploadConfig;
- (void)p_uploadTraceEventsByHttp:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)uploadTraceEvents:(id)a0 completion:(id /* block */)a1;
- (void)stopTimeoutCheckTimer;
- (void)startUploadCheckTimer;
- (void)startTimeoutCheckTimer;
- (BOOL)isFilterBySettingKeyList:(id)a0;
- (BOOL)isFilterByServerKeyList:(id)a0;
- (void)uploadEventByHTTP:(id)a0;
- (void)runOnEventProcessSerialQueue:(id /* block */)a0;
- (void)doUploadCheck;
- (BOOL)isFilterBySettingKeyRate:(id)a0;
- (void)stopUploadCheckTimer;
- (void)doTimeoutCheck;
- (void).cxx_destruct;
- (id)init;

@end
