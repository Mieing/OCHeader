@class NSString, NSArray;

@interface DYAAssistAccountModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) long long passportEnterpriseUserType;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *accountType;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSArray *connect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
