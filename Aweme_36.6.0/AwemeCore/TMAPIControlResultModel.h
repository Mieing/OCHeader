@class NSError, NSArray, NSString;
@protocol PNSRuleResultProtocol;

@interface TMAPIControlResultModel : NSObject <TMAPIControlTaskResult>

@property (retain, nonatomic) NSError *resultError;
@property (nonatomic) unsigned long long resultAction;
@property (retain, nonatomic) id<PNSRuleResultProtocol> ruleEngineResult;
@property (copy, nonatomic) NSArray *resultTaskTraces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithError:(id)a0 action:(unsigned long long)a1;

- (id)rulerResult;
- (id)taskTraces;
- (unsigned long long)action;
- (void).cxx_destruct;
- (id)error;
- (id)init;

@end
