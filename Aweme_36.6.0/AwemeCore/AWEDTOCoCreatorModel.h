@class NSString;

@interface AWEDTOCoCreatorModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *userAvatarJson;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
