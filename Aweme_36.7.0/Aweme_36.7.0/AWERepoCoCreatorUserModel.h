@class NSString, NSDictionary;

@interface AWERepoCoCreatorUserModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSDictionary *avatarThumb;
@property (nonatomic) long long roleId;
@property (copy, nonatomic) NSString *roleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
