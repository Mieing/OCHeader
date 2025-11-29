@class NSString;

@interface DYSecondAccountModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatar;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *lastLoginTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
