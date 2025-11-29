@class NSString;

@interface IESAccountSubAccountModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *secUid;
@property (nonatomic) BOOL isCurrentLoginUser;
@property (nonatomic) BOOL isBindLoginMobile;
@property (nonatomic) long long passportEnterpriseUserType;
@property (nonatomic) long long appID;
@property (nonatomic) BOOL businessAccountActive;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isBusinessAccountOperator;
- (void).cxx_destruct;

@end
