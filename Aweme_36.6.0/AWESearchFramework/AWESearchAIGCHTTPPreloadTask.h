@class AWESearchAIGCHTTPPreloadRequest, NSMutableArray, AWESearchAIGCHTTPPreloadResult;

@interface AWESearchAIGCHTTPPreloadTask : NSObject

@property (retain, nonatomic) NSMutableArray *callbacks;
@property (readonly, nonatomic) AWESearchAIGCHTTPPreloadRequest *request;
@property (readonly, nonatomic) AWESearchAIGCHTTPPreloadResult *result;

- (void)requestCompleteWithModel:(id)a0 error:(id)a1;
- (void)startTaskWithRequest:(id)a0;
- (void)addCompleteCallback:(id /* block */)a0;
- (void).cxx_destruct;

@end
