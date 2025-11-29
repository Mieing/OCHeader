@class NSString, MMLiveFlowCancelationToken;

@interface MMLiveFlowActionInvocationContext : NSObject

@property (retain, nonatomic) NSString *invocationId;
@property (retain, nonatomic) MMLiveFlowCancelationToken *cancelationToken;

- (id)description;
- (void).cxx_destruct;

@end
