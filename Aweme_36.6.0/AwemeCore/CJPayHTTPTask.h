@class TTHttpTask;

@interface CJPayHTTPTask : NSObject

@property (retain, nonatomic) TTHttpTask *httpTask;

- (id)initWithHttpTask:(id)a0;
- (void).cxx_destruct;
- (void)setPriority:(float)a0;
- (void)resume;
- (void)setTimeoutInterval:(double)a0;
- (void)cancel;

@end
