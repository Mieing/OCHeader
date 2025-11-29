@class NSString;

@interface AWESiriDonationDecision : NSObject

@property (nonatomic) unsigned long long decisionType;
@property (copy, nonatomic) NSString *reason;

+ (id)rejectedDecisionWithReason:(id)a0 extraInfo:(id)a1;
+ (id)approvedDecision;
+ (id)rejectedDecisionWithReason:(id)a0;

- (void).cxx_destruct;
- (BOOL)isApproved;
- (BOOL)isRejected;

@end
