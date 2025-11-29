@class NSString;

@interface AWEUserCommercePermissionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoTopPermission;
@property (nonatomic) long long linkAdPermission;
@property (nonatomic) long long starAtlasPermission;
@property (nonatomic) long long enterpriseAccount;
@property (nonatomic) long long enterpriseHeadImage;
@property (nonatomic) BOOL businessPortalPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)shouldShowLinkAdAuthorize;
- (BOOL)shouldAuthorizedLinkAdAuthorize;
- (id)init;

@end
