@class NSMutableArray;

@interface AWEFeedTemplateAnchorViewAnimationQueueManager : NSObject

@property (retain, nonatomic) NSMutableArray *animationQueue;
@property (nonatomic) BOOL isExecuting;

- (void)enqueueAnimationTask:(id)a0;
- (void)tryExecuteNextTask;
- (void).cxx_destruct;
- (id)init;
- (void)executeTask:(id)a0;

@end
