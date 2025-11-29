@class IESECWinContext, NSString;

@interface IESECWinHookActionService : NSObject <IESECWinOpportunityProtocol, IESECWinHookActionService>

@property (weak, nonatomic) IESECWinContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ backAcitonBlock;
@property (copy, nonatomic) id /* block */ backAcitonJudgeCondition;
@property (copy, nonatomic) id /* block */ backAcitonReplaceBlock;

- (void)hookWindowBackAction:(id /* block */)a0 judgeCondition:(id /* block */)a1 replaceBlock:(id /* block */)a2;
- (void)executeWindowBackAction;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;

@end
