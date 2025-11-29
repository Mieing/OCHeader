@interface IESGameCPKitServiceProvider : NSObject <IESGameCPKitService>

+ (id)sharedInstance;

- (id)anchorPromotionInterface;
- (id)settingInterface;
- (id)xplayGameInterfaceWithContext:(id)a0;
- (id)explainCardInterfaceWithContext:(id)a0;
- (id)audienceEntranceInterfaceWithContext:(id)a0;
- (id)audiencePromoterDetailInterfaceWithContext:(id)a0;
- (id)audienceDetailInstanceInterfaceWithContext:(id)a0;
- (id)storeKitInterface;
- (id)gameMetaDataInterfaceWithContext:(id)a0;
- (id)heliumGameInterfaceWithContext:(id)a0;
- (id)heliumGameGlobalInterface;
- (id)propInterface;
- (id)schemaInterface;
- (id)liveAnchorContainerInterface;
- (id)liveAudienceContainerInterface;
- (id)livePreStreamContainerInterface;
- (id)timorBridgeInterface;
- (id)teamPlayInterfaceWithContext:(id)a0;
- (id)launchInterface;
- (id)explainCardHybridViewInterface;
- (id)gameImagePreloadInterface;

@end
