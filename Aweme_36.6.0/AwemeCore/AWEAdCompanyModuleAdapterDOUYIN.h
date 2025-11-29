@class NSString;

@interface AWEAdCompanyModuleAdapterDOUYIN : NSObject <AWEAdCompanyModuleAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldInactiveEnterpriseInstantMessageCard;
+ (BOOL)shouldShieldPermission;
+ (BOOL)shouldShieldAddCompanyPermission;
+ (id)scenesShouldJoinEnterpriseTabExtra;
+ (BOOL)shouldHideEnterpriseCommentLinkWithCompanySubType:(id)a0;
+ (BOOL)shouldHideEnterpriseCommentLink;


@end
