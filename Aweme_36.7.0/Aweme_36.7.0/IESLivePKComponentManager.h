@class NSString, NSMutableDictionary;

@interface IESLivePKComponentManager : NSObject <IESLivePKComponent>

@property (retain, nonatomic) NSMutableDictionary *components;
@property (nonatomic) BOOL hasLoadLynxControlComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)createComponents;
- (void)loadComponents;
- (void)componentContainerFrameChanged;
- (void)handleBattleBg:(id)a0 topImage:(id)a1 bottomImage:(id)a2;
- (void)reloadComponents;
- (id)componentGroup;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)onReceivedPKLynxEvent:(long long)a0 extraParams:(id)a1;
- (void)loadTargetComponents:(id)a0;
- (void)componentBusinessPrepare;
- (void)componentInteracting;
- (void)componentDidClear:(BOOL)a0;
- (BOOL)checkIfFrameCanCreateComponent;
- (void)componetsDidload;
- (id)shareStreamComponentGroup;
- (id)preStreamComponentGroup;
- (id)voteAnchorComponentGroup;
- (id)voteAudienceComponentGroup;
- (id)breakthroughAnchorComponentGroup;
- (id)breakthroughAudienceComponentGroup;
- (id)audienceComponentGroup;
- (id)creatTargetComponentsByNames:(id)a0;
- (void)componentDidLoadTargetComponents:(id)a0;
- (void)componentPlayingTargetComponents:(id)a0;
- (void)componentDidClearTargetComponents:(id)a0 isClear:(BOOL)a1;
- (void)componentPunishingTargetComponents:(id)a0;
- (void)componentInteractingTargetComponents:(id)a0;
- (Class)getComponentClassByName:(id)a0;
- (void)destoryComponents;
- (void).cxx_destruct;

@end
