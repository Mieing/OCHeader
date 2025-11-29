@class NSString;

@interface AWEUGRouterHandler : HTSService <AWEUGRouterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCampaignContainerSchema:(id)a0;
+ (void)transferCampaignContainerWithSchema:(id)a0 extraProps:(id)a1 completion:(id /* block */)a2;
+ (void)transferWithTargetViewController:(id)a0 completion:(id /* block */)a1;
+ (BOOL)needSwitchToUGContainer:(id)a0;
+ (BOOL)isPopupSchema:(id)a0;
+ (void)handleRegisterCampaignTransfer:(id)a0;
+ (void)handleRegisterBulletPageType;

- (id)realSchemaForRedirect:(id)a0;
- (id)viewControllerForSchema:(id)a0 extraProps:(id)a1;
- (void)transferSchema:(id)a0 extraProps:(id)a1 completion:(id /* block */)a2;
- (id)bulletSchemaForOriginSchema:(id)a0;
- (id)mergeContext:(id)a0 forSchema:(id)a1;
- (BOOL)isPolarisSchema:(id)a0;
- (id)polarisSchemaFromFlowerSchema:(id)a0;
- (void)monitorOldFlowerSchema:(id)a0 scene:(id)a1;

@end
