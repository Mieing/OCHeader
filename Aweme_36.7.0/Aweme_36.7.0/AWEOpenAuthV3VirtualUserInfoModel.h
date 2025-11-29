@class NSString;

@interface AWEOpenAuthV3VirtualUserInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *identityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
