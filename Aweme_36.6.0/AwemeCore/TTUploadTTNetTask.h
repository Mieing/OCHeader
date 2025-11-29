@class NSMutableArray, TTUploadDynamicSliceDispatcher, NSObject, NetJob;
@protocol OS_dispatch_source;

@interface TTUploadTTNetTask : TTUploadTask

@property (retain) NetJob *queryJob;
@property (retain) TTUploadDynamicSliceDispatcher *dynamicSliceDispatcher;
@property (copy, nonatomic) id /* block */ onUploadEventCallback;
@property long long state;
@property long long internalErrorCode;
@property int queryRetryTimes;
@property (retain) NSObject<OS_dispatch_source> *queryRetryTimer;
@property (copy) id /* block */ onQueryCallback;
@property (retain) NSMutableArray *ttnetErrorResponseArray;
@property BOOL isCancel;
@property (nonatomic) long long realUploadLength;
@property (nonatomic) double timestamp;

- (id)createTracker:(long long)a0;
- (int)decreaseRetryTimes;
- (long long)getUploadedLength:(id)a0 param:(id)a1;
- (id)getUploadInfo:(long long)a0 serverResponse:(id)a1;
- (void)addTTNetErrorResponseArray:(id)a0;
- (void)doLoop:(long long)a0 serverResponse:(id)a1 extraLog:(id)a2;
- (void)getServerInfo;
- (void)dynamicSliceDispatcherStart:(id)a0;
- (void)sendCompletedEventToServer;
- (void)saveErrorInfo:(long long)a0 log:(id)a1;
- (void)reportResult:(long long)a0 uploaderTracker:(id)a1 param:(id)a2 serverResponse:(id)a3;
- (void)clearReference;
- (void)queryUploadProgressAsync:(id /* block */)a0 param:(id)a1 status:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)start;
- (void)dealloc;
- (void)cancel;

@end
