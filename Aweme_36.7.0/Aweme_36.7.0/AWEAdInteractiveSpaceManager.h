@class NSString, AWEAwemeModel, AWEInteractiveSpaceRifleView, UIViewController;
@protocol AWEPlayInteractionViewControllerProtocol;

@interface AWEAdInteractiveSpaceManager : HTSService <AWEAdInteractiveSpaceManager, AWEGokuPluginTargetProtocol, AWEAdInteractiveSpaceBridgeProtocol, AWEBDARifleViewDelegate>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *interactionVC;
@property (retain, nonatomic) AWEInteractiveSpaceRifleView *lynxContainer;
@property (nonatomic) BOOL correctContainerHeight;
@property (nonatomic) unsigned long long componentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long showLynxContainerType;

+ (BOOL)shouldShowAdInteractiveSpaceLynxContainer:(id)a0;

- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (void)willDisplayCellWithContext:(id)a0;
- (void)playerDidUpdateWith:(id)a0;
- (void)viewDidAppearWith:(id)a0;
- (void)viewDidDisappearWith:(id)a0;
- (void)gokuSetModelWith:(id)a0;
- (void)gokuSetHideWith:(id)a0;
- (void)refreshTableViewController:(id)a0;
- (void)rifleView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)rifleView:(id)a0 didLoadFailedWithURL:(id)a1 error:(id)a2;
- (void)hideAdInteractiveSpaceLynxContainer;
- (void)showAdInteractiveSpaceLynxContainer;
- (void)trackWithEvent:(id)a0 label:(id)a1 refer:(id)a2 extraData:(id)a3;
- (void)adInteractiveSpaceInteractionFinish;
- (void)enableHapticsFeedback;
- (void)trackAdInteractiveSpace:(id)a0 resultType:(long long)a1 extraData:(id)a2;
- (void)handelAdInteractiveSpaceInteractionStateWith:(long long)a0 Method:(long long)a1;
- (void)interactiveSpaceContainerPreLoadStart;
- (void)preloadInteractiveSpaceLynxContainerWith:(id)a0 model:(id)a1;
- (id)getGeckoInfoList;
- (id)lynxBridges;
- (void)trackAdInteractiveSpace:(id)a0 resultType:(long long)a1 extraData:(id)a2 awemeModel:(id)a3;
- (id)getAdInteractiveSpaceResourceChannels:(id)a0;
- (void)reset:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)applicationDidEnterBackground;
- (id)init;
- (unsigned long long)moduleNames;
- (void)clearData;
- (void)applicationWillEnterForeground;
- (void)dealloc;

@end
