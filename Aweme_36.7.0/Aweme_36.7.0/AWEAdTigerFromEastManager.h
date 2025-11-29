@class AWEAdTigerEggManager, NSString, AWEPlayInteractionAdRiflePendantElement, AWEAdInteractiveSpaceCompassManager;
@protocol AWECommerceComponentContext;

@interface AWEAdTigerFromEastManager : NSObject <AWEAdTigerFromEastManager, AWECommerceComponentProtocol>

@property (retain, nonatomic) AWEAdInteractiveSpaceCompassManager *compassManager;
@property (retain, nonatomic) AWEAdTigerEggManager *tigerEggManager;
@property (weak, nonatomic) AWEPlayInteractionAdRiflePendantElement *pendantManager;
@property (nonatomic) long long stageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)needToShowPendant:(id)a0;
+ (BOOL)needToShowCompass:(id)a0;
+ (BOOL)needToShowTigerEgg:(id)a0;
+ (BOOL)isTigerFromEastAd:(id)a0;
+ (void)preFetchDataIfNeeded:(id)a0 isTV:(BOOL)a1;
+ (void)removeTVPreFetchData:(id)a0;
+ (void)removeFeedPreFetchData;

- (void)preLoadData:(id)a0 interactionVC:(id)a1;
- (void)transferToCompassStage;
- (void)transferToTargetPage:(id)a0 refer:(id)a1;
- (void)transferToTigerEggStage:(id)a0;
- (void)resetTigerEggManager;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
