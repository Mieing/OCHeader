@class AWEPublishBaseTask;
@protocol AWEPublishStageProtocol;

@interface AWEPublishStageOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) id<AWEPublishStageProtocol> publishStage;
@property (weak, nonatomic) AWEPublishBaseTask *host;
@property (nonatomic) long long stageIndex;

- (id)initWithPublishStage:(id)a0;
- (void).cxx_destruct;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)start;
- (void)dealloc;
- (void)main;

@end
