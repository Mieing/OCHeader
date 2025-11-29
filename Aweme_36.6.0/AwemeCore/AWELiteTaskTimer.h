@class NSMutableDictionary, NSTimer, NSString, NSMutableArray;
@protocol AWELiteTimerTaskExecuteDelegate;

@interface AWELiteTaskTimer : NSObject <AWELiteTimerRuleServiceProtocol>

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSMutableArray *allRules;
@property (retain, nonatomic) NSMutableArray *validRules;
@property (retain, nonatomic) NSMutableDictionary *ruleCurrentCount;
@property (retain, nonatomic) NSMutableDictionary *ruleTimeLimit;
@property (copy, nonatomic) NSString *recentStartedRuleID;
@property (retain, nonatomic) NSMutableDictionary *currentProductID;
@property (retain, nonatomic) NSMutableDictionary *watchedProducts;
@property (weak, nonatomic) id<AWELiteTimerTaskExecuteDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isReachedLimit:(id)a0 productID:(id)a1;
- (void)setTaskExecuteDelegate:(id)a0;
- (void)__countTime;
- (BOOL)__checkTimerStatus;
- (BOOL)__hasReachedLimit:(id)a0;
- (void)resumeCountingForRule:(id)a0;
- (void)startCountingForRule:(id)a0 productID:(id)a1;
- (void)stopCountingTimeForRule:(id)a0 productID:(id)a1 isReachProductLimit:(BOOL)a2;
- (void)startCountingForRule:(id)a0 productID:(id)a1 timeLimit:(double)a2;
- (void)stopCountingTimeForRule:(id)a0 productID:(id)a1;
- (void)initTaskTimer;
- (void)deallocTaskTimer;
- (id)__virtulProductIDWithRuleID:(id)a0;
- (void)__startCountingWithProductID:(id)a0 timeLimit:(double)a1 ruleID:(id)a2;
- (void)pauseCountingTimeForRule:(id)a0 productID:(id)a1;
- (void)__stopCountingWithProductID:(id)a0 hasLimitedReached:(BOOL)a1 resetCountTime:(BOOL)a2 ruleID:(id)a3;
- (void)tryRemoveValidRuleID:(id)a0;
- (void)resetRuleCurrentCount:(id)a0;
- (void)tryAddValidRuleID:(id)a0;
- (void)__markWatchedProduct:(id)a0 ruleID:(id)a1;
- (void)startTimerIfNeed;
- (void)removeTimerIfNeed;
- (void)startCountingForRule:(id)a0;
- (void)pauseCountingTimeForRule:(id)a0;
- (void)stopCountingTimeForRule:(id)a0;
- (BOOL)isCountingForRule:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupTimer;

@end
