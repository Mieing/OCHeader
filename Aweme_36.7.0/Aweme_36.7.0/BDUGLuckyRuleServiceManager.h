@class NSString;
@protocol BDUGLuckyTimerRuleServiceProtocol;

@interface BDUGLuckyRuleServiceManager : NSObject <BDUGLuckyRuleServiceManagerProtocol>

@property (retain, nonatomic) id<BDUGLuckyTimerRuleServiceProtocol> pendantRuleService;
@property (retain, nonatomic) id<BDUGLuckyTimerRuleServiceProtocol> timingRuleService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void).cxx_destruct;

@end
