@interface IESForestWorkflowStateManager : NSObject

@property (nonatomic) unsigned long long state;

- (BOOL)isExpectedState:(unsigned long long)a0;
- (BOOL)updateState:(unsigned long long)a0;
- (id)init;

@end
