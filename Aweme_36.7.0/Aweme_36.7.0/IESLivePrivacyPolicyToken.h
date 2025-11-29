@class NSString, NSMutableDictionary, NSDate;

@interface IESLivePrivacyPolicyToken : NSObject

@property (retain, nonatomic) NSDate *createAt;
@property (retain, nonatomic) NSMutableDictionary *policies;
@property (retain, nonatomic) NSString *policyType;
@property (nonatomic) BOOL valid;

- (id)initWithPolicies:(id)a0 policyType:(id)a1;
- (BOOL)removePolicyById:(id)a0;
- (id)allPolicies;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)isEmpty;
- (id)description;

@end
