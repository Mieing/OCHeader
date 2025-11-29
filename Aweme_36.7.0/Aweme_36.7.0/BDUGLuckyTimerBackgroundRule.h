@class NSString;

@interface BDUGLuckyTimerBackgroundRule : NSObject <BDUGLuckyTimerRuleProtocol>

@property (nonatomic) BOOL isSatisfied;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleName;
+ (void)registerTimingRule;
+ (void)registerPendantRule;

- (void)__updateStatus;
- (void)__enterBackground;
- (void)__enterForeground;
- (id)init;
- (void)dealloc;

@end
