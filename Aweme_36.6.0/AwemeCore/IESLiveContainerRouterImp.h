@class NSMutableDictionary, NSString, IESLiveSafetyCheckManager, HTSLiveRoomAPI;
@protocol IESLiveCustomConfig, IESLiveCancelableSegue, IESLiveFeedDrawerService, IESLiveRoomInnerFeedContainerService, IESLiveChargeService, IESLiveReturnBackRouter, IESLiveURLSchemaHandler, IESLiveSlideControllerFactory;

@interface IESLiveContainerRouterImp : NSObject <IESLiveReferenceActions, IESLiveContainerRouter>

@property (weak, nonatomic) id<IESLiveCancelableSegue> segueOnGoing;
@property (retain, nonatomic) HTSLiveRoomAPI *api;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveCustomConfig> customConfig;
@property (retain, nonatomic) id<IESLiveRoomInnerFeedContainerService> scrollContainerService;
@property (retain, nonatomic) id<IESLiveChargeService> chargeService;
@property (retain, nonatomic) id<IESLiveFeedDrawerService> feedDrawerService;
@property (weak, nonatomic) id<IESLiveReturnBackRouter> returnBackRouter;
@property (retain, nonatomic) IESLiveSafetyCheckManager *safeManager;
@property (retain, nonatomic) NSMutableDictionary *enterRoomMoniterContext;
@property (nonatomic) BOOL isTrackShow;
@property (retain, nonatomic) id<IESLiveSlideControllerFactory> slideControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRouterImp;

- (id)attachingDIContext;
- (void)openSchema:(id)a0;
- (void)openPlaybackRoomWithEpisodeId:(id)a0 params:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)openPlaybackRoomWithEpisode:(id)a0 params:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (id)openLiveControllerWithSourceParams:(id)a0 trackParams:(id)a1 extraParams:(id)a2 openLiveModel:(id)a3;
- (void)openWalletController;
- (void)openWalletControllerWithParams:(id)a0;
- (void)openChargeController;
- (void)openSchema:(id)a0 params:(id)a1;
- (void)openSchema:(id)a0 fromInside:(BOOL)a1;
- (void)openSchema:(id)a0 fromInside:(BOOL)a1 completion:(id /* block */)a2;
- (void)openScheme:(id)a0 fromInside:(BOOL)a1 openResult:(id /* block */)a2;
- (id)supportedSchemaList;
- (void).cxx_destruct;
- (id)init;

@end
