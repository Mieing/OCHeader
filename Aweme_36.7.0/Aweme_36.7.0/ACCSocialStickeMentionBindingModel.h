@class NSString;

@interface ACCSocialStickeMentionBindingModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userName;
@property (nonatomic) long long followStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithSecUserId:(id)a0 userId:(id)a1 userName:(id)a2 followStatus:(long long)a3;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
