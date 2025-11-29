@class NSSet, NSString;

@interface IESLiveRoomStatePrivacyPolicy : IESLivePrivacyPolicy

@property (readonly, nonatomic) NSSet *event;
@property (readonly, nonatomic) long long intent;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, nonatomic) long long affectedStrategy;
@property (readonly, nonatomic) NSSet *affectedResources;

+ (id)policyWithDictionary:(id)a0;

- (id)initWithId:(id)a0 name:(id)a1 owner:(id)a2 desc:(id)a3 category:(id)a4 priority:(long long)a5 event:(id)a6 intent:(long long)a7 source:(id)a8 affectedStrategy:(long long)a9 affectedResources:(id)a10 conditions:(id)a11 permission:(long long)a12 reason:(id)a13;
- (id)_stringFromEvents:(id)a0;
- (id)_stringFromAffectedResources:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
