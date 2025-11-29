@class NSString;

@interface AWEPublishPrivacyUtils : HTSService <AWEPublishPrivacyUtils>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)getPrivacyPermissionTypeForRepoAuthorityModel:(id)a0;
+ (long long)getPrivacyPermissionTypeForPublishViewModel:(id)a0;
+ (long long)getPrivacyPermissionTypeForDraftModel:(id)a0;


@end
