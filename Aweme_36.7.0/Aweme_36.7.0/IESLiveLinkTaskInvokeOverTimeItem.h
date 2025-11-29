@class NSString, IESLiveLinkTask;

@interface IESLiveLinkTaskInvokeOverTimeItem : NSObject

@property (retain, nonatomic) NSString *commonTaskId;
@property (retain, nonatomic) IESLiveLinkTask *realTask;
@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) double invokeOverTime;

- (void)checkInvoke;
- (void)startInvokeWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
