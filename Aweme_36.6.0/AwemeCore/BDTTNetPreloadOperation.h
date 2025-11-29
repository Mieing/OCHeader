@class TTHttpTask, NSString, NSDictionary;

@interface BDTTNetPreloadOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) TTHttpTask *task;
@property (copy, nonatomic) NSString *urlString;
@property (retain, nonatomic) id params;
@property (retain, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) id responseSerializer;
@property (nonatomic) BOOL isBinary;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long retryCount;

- (void).cxx_destruct;
- (void)sendRequest;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancel;

@end
