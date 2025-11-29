@class NSString, IESLivePrivacyPolicyCondition;

@interface IESLivePrivacyPolicy : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *policyId;
@property (readonly, copy, nonatomic) NSString *policyName;
@property (readonly, copy, nonatomic) NSString *owner;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, nonatomic) long long priority;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) IESLivePrivacyPolicyCondition *conditions;
@property (readonly, nonatomic) long long permission;
@property (readonly, copy, nonatomic) NSString *reason;

+ (id)policyFromDictionary:(id)a0;

- (id)initWithId:(id)a0 name:(id)a1 owner:(id)a2 desc:(id)a3 priority:(long long)a4 category:(id)a5 conditions:(id)a6 permission:(long long)a7 reason:(id)a8;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
