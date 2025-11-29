@class TTHttpTask;

@interface IESLiveGameOpenPlatformNetworkTask : NSObject

@property (retain, nonatomic) TTHttpTask *task;

- (id)initWithHttpTask:(id)a0;
- (void).cxx_destruct;
- (void)suspend;
- (void)resume;
- (void)cancel;

@end
