@class NSString;

@interface AWECoCreatorRoleInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long roleID;
@property (copy, nonatomic) NSString *roleName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
