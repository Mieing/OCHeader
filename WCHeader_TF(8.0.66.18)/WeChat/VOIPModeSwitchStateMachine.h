@interface VOIPModeSwitchStateMachine : NSObject

@property (readonly, nonatomic) unsigned long long status;

- (id)init;
- (void)resetStatus;
- (void)ChangeStatus:(int)a0;
- (unsigned long long)doAction:(int)a0;

@end
