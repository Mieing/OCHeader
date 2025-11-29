@class NSHTTPURLResponse, NSMutableURLRequest, NSData, NSMutableData;

@interface QBWupHttpRequest : NSObject {
    NSMutableURLRequest *_request;
    NSMutableData *_data;
    long long _retryTimes;
    NSHTTPURLResponse *_rsp;
    NSData *_rspData;
}

@property (copy) id /* block */ CompletionBlock;
@property (copy) id /* block */ FailedBlock;

- (id)initWithURL:(id)a0;
- (void)startAsynchronous;
- (id)responseData;
- (id)responseHeaders;
- (long long)responseStatusCode;
- (void)setRequestMethod:(id)a0;
- (void)addRequestHeader:(id)a0 value:(id)a1;
- (void)appendPostData:(id)a0;
- (void)failWithError:(id)a0;
- (void)requestFinished;
- (void).cxx_destruct;

@end
