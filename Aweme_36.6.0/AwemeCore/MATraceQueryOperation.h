@class MATraceRequestV4, NSArray, NSDate, NSMutableArray, NSError;

@interface MATraceQueryOperation : NSOperation

@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) NSArray *subRequests;
@property (retain, nonatomic) NSMutableArray *pendingNetworkOpArr;
@property (retain, nonatomic) NSError *lastNetworkError;
@property (nonatomic) unsigned long long nextProcessingCallbackIndex;
@property (nonatomic) double timeOut;
@property (retain, nonatomic) MATraceRequestV4 *request;
@property (nonatomic) long long opertationTag;

- (BOOL)isTimeOut;
- (void)onHandleAsyncSingleQueryResult:(id)a0 error:(id)a1;
- (id)asyncSingleQueryProcessedTraceWith:(id)a0 completeCallback:(id /* block */)a1;
- (void)loopCheckResponses;
- (void).cxx_destruct;
- (id)init;
- (void)main;
- (void)cancel;

@end
