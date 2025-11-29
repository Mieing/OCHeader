@class NSString, IESLiveGameOpenPlatformAudienceAppManager;
@protocol IESLiveOpenPlatformEntranceHandlerRouter;

@interface IESLiveGameOpenPlatformAudienceFragment : IESLiveRoomComponent <IESLiveGameOpenPlatformAudienceRouter, IESLiveOpenPlatformDebugRouter, IESLiveSEIListener, HTSLiveGiftActions>

@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceAppManager *appManager;
@property (nonatomic) double sendGiftTime;
@property (retain, nonatomic) id<IESLiveOpenPlatformEntranceHandlerRouter> entranceHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentDestroy;
- (void)componentOrientationTransitionBegin:(long long)a0;
- (void)didSendGiftWithCost:(long long)a0;
- (void)componentRefresh;
- (void)mountDidFinishForLevel:(long long)a0;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (void)didReceivedFinishMessage;
- (void)debugLoadWithSchema:(id)a0;
- (void)loadWithAppID:(id)a0 schema:(id)a1 source:(id)a2 name:(id)a3;
- (BOOL)gameComponentPreloaded:(BOOL)a0;
- (void).cxx_destruct;

@end
