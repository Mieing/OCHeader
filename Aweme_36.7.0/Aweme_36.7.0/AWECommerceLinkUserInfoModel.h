@class NSString;

@interface AWECommerceLinkUserInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long authStatus;
@property (nonatomic) long long authType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasLinkPermission;
- (BOOL)hasJoinInLink;
- (BOOL)shouldAuthorizedLink;

@end
