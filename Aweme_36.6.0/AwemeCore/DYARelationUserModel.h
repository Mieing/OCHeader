@class NSString;

@interface DYARelationUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *relationUserToken;
@property (nonatomic) BOOL assistRegister;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *safeMobile;
@property (nonatomic) long long passportEnterpriseUserType;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
