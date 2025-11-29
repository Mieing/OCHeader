@class NSString;

@interface IESLiveClientLLMSecurityResult : NSObject

@property (readonly, nonatomic) BOOL hasRisk;
@property (readonly, copy, nonatomic) NSString *riskDetails;

- (id)initWithRisk:(BOOL)a0 details:(id)a1;
- (void).cxx_destruct;

@end
