@class NSString, NSMutableArray;

@interface BDPClientAIFeatureCenterOperation : NSOperation <BDPClientAIFeatureCenterOperation>

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (retain, nonatomic) NSMutableArray *callbackBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeTask;
- (void)taskDone;
- (void)addHandlersForCompleted:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (void)start;

@end
