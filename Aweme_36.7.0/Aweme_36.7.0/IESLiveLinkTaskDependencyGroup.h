@class IESLiveLinkTask, NSMutableDictionary, NSString, IESLiveLinkIntent;

@interface IESLiveLinkTaskDependencyGroup : NSObject

@property (retain, nonatomic) NSMutableDictionary *dependencyGroup;
@property (retain, nonatomic) IESLiveLinkTask *task;
@property (copy, nonatomic) id /* block */ groupBlock;
@property (retain, nonatomic) IESLiveLinkIntent *intent;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) double waitOverTime;

- (void)checkAllFinished;
- (void)_notifyFinishTask:(id)a0;
- (void)immediateInvoke;
- (void)checkOverTime;
- (void)setTask:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
