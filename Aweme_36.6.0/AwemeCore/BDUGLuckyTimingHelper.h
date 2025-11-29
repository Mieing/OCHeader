@class NSArray, NSDictionary, NSString, NSMutableArray;
@protocol BDUGLuckyTimerHelperDelegateProtocol, BDUGLuckyTimerTaskContextProtocol;

@interface BDUGLuckyTimingHelper : NSObject <BDUGLuckyActionListenerProtocol, BDUGLuckyTimerRuleListenerProtocol>

@property (retain, nonatomic) id<BDUGLuckyTimerTaskContextProtocol> context;
@property (weak, nonatomic) id<BDUGLuckyTimerHelperDelegateProtocol> delegate;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSDictionary *timingRules;
@property (retain, nonatomic) NSMutableArray *timingActions;
@property (retain, nonatomic) NSMutableArray *satisfiedRules;
@property (nonatomic) BOOL canStartTiming;
@property (copy, nonatomic) NSString *observerKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTiming:(id)a0;
- (void)onSatisfiedRule:(id)a0;
- (void)onDissatisfiedRule:(id)a0;
- (void)__register;
- (void)__updateTimingStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTiming:(id)a0;
- (id)initWithContext:(id)a0 delegate:(id)a1;

@end
