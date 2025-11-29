@class AWEDetailThemeViewModel, AWEDetailThemeTracker, NSString;

@interface AWEDetailThemeActionService : NSObject <AWEDetailActionService, AWEDetailCreateActionService>

@property (weak, nonatomic) AWEDetailThemeViewModel *stateContext;
@property (weak, nonatomic) AWEDetailThemeTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionWithActionSender:(id)a0;
- (id)initWithStateContext:(id)a0 tracker:(id)a1;
- (void)actionWithCreateSender:(id)a0;
- (void)actionWithFriendSender:(id)a0;
- (void)actionWithCreateLoraCustomWordSelectPageWith;
- (void)actionWithAICreationSender:(id)a0;
- (void)handleActionSchema:(id)a0 trackParams:(id)a1;
- (void).cxx_destruct;

@end
