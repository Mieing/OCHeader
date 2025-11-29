@class IESLiveGameOpenPlatformHTTPSessionManager, IESLiveGameOpenPlatfromRequestModel;

@interface IESLiveGameOpenPlatformHTTPOperation : NSOperation {
    BOOL _executing;
    BOOL _finished;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformHTTPSessionManager *httpSessionManager;
@property (retain, nonatomic) IESLiveGameOpenPlatfromRequestModel *requestModel;

- (id)initWithHTTPSessionManager:(id)a0 requestModel:(id)a1;
- (void).cxx_destruct;
- (void)setExecuting:(BOOL)a0;
- (void)setFinished:(BOOL)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (BOOL)isFinished;

@end
