@class NSString, NSSet, NSDictionary;

@interface IESLiveAVResourceRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *callerCls;
@property (readonly, copy, nonatomic) NSString *callerSel;
@property (readonly, nonatomic) long long resource;
@property (readonly, nonatomic) long long intent;
@property (readonly, nonatomic) long long role;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSSet *bizTags;
@property (copy, nonatomic) NSString *cert;
@property (readonly, copy, nonatomic) NSDictionary *bizContext;

+ (id)requestWithResource:(long long)a0 intent:(long long)a1 role:(long long)a2 source:(id)a3 bizTags:(id)a4 bizContext:(id)a5 callerCls:(id)a6 callerSel:(id)a7;

- (id)descDict;
- (id)initWithResource:(long long)a0 intent:(long long)a1 role:(long long)a2 source:(id)a3 bizTags:(id)a4 bizContext:(id)a5 callerCls:(id)a6 callerSel:(id)a7;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
