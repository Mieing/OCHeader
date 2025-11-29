@class NSString, NSArray;

@interface AWEPublishCoCreatorSettingsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long entryStatus;
@property (nonatomic) long long certStatus;
@property (nonatomic) long long albumEntryStatus;
@property (nonatomic) long long albumCertStatus;
@property (nonatomic) long long externalContributeStatus;
@property (copy, nonatomic) NSString *externalRestrictionMsg;
@property (copy, nonatomic) NSArray *roles;
@property (copy, nonatomic) NSArray *albumRoles;
@property (nonatomic) long long maxRoleNum;
@property (nonatomic) long long coPublishTimes;
@property (nonatomic) long long totalCoPublishTimes;
@property (nonatomic) long long currentType;
@property (copy, nonatomic) NSString *restrictionMsg;
@property (copy, nonatomic) NSString *withoutPermissionReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rolesJSONTransformer;
+ (id)albumRolesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
