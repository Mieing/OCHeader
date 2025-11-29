@class NSSet;

@interface IESLiveAVResourcePrivacyPolicy : IESLivePrivacyPolicy

@property (readonly, nonatomic) long long resource;
@property (readonly, nonatomic) long long intent;
@property (readonly, nonatomic) NSSet *roles;
@property (readonly, nonatomic) NSSet *bizTags;
@property (readonly, nonatomic) NSSet *sources;

+ (id)policyFromDictionary:(id)a0;

- (id)initWithId:(id)a0 name:(id)a1 owner:(id)a2 desc:(id)a3 category:(id)a4 priority:(long long)a5 resource:(long long)a6 intent:(long long)a7 roles:(id)a8 sources:(id)a9 bizTags:(id)a10 conditions:(id)a11 permission:(long long)a12 reason:(id)a13;
- (id)_stringFromRoles:(id)a0;
- (id)_stringFromSet:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
