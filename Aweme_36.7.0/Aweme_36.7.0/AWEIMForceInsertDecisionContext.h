@class NSString;
@protocol IESIMHttpTask;

@interface AWEIMForceInsertDecisionContext : NSObject <AWEIMTaskPipelineContext>

@property (nonatomic) BOOL isCancelled;
@property (copy, nonatomic) id /* block */ decisionCompletion;
@property (copy, nonatomic) NSString *loginUid;
@property (retain, nonatomic) id<IESIMHttpTask> prevRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;

@end
