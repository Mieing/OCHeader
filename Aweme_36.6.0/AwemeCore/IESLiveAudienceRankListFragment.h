@class HTSLiveAudienceListStore, NSString;
@protocol IESLiveURLSchemaHandler, IESLiveGiftModule, IESHYControllerProtocol, IESLivePerfSampler, HTSLiveAudienceListActions, IESLiveInternalRouter;

@interface IESLiveAudienceRankListFragment : IESLiveRoomComponent <HTSLiveAudienceRankListRouter, IESHYControllerDelegate>

@property (retain, nonatomic) HTSLiveAudienceListStore *store;
@property (retain, nonatomic) id<IESLiveGiftModule> giftModule;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) id<HTSLiveAudienceListActions> actionCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (weak, nonatomic) id<IESHYControllerProtocol> hybridContainer;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (nonatomic) double appearTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (void)_aweLazyRegisterLoad;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentRefresh;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (id)getComponentsWithURLString:(id)a0;
- (id)openHybridURL:(id)a0 fromInside:(BOOL)a1;
- (void)puzzleHybridPopControllerDismissedWithObject:(id)a0;
- (void)showAudienceRankList;
- (void)showLynxAudienceListWithRankType:(long long)a0;
- (void)showLynxLinkMicGuestRankListWithUser:(id)a0 extraParams:(id)a1;
- (void)showLinkMicGuestRankListWithUser:(id)a0;
- (id)showAudienceRankListWithCustomParam:(id)a0;
- (BOOL)shouldBanAudienceContributorView;
- (id)showLynxAudienceListWithRankType:(long long)a0 customParam:(id)a1 useKrossRouter:(BOOL)a2;
- (void).cxx_destruct;

@end
