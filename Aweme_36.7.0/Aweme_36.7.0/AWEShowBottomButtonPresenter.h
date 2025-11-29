@class NSMutableDictionary, AWEShowBottomButtonSceneManager, AWEPlayInteractionContext, NSString;
@protocol AWEShowBottomButtonViewProtocol, AWEShowBottomButtonPluginHubProtocol;

@interface AWEShowBottomButtonPresenter : NSObject <AWEPaidStreamPlugin, AWEShowBottomButtonPluginHubDelegate, AWEShowBottomButtonPresenterProtocol>

@property (weak, nonatomic) id<AWEShowBottomButtonViewProtocol> view;
@property (weak, nonatomic) AWEPlayInteractionContext *interactionContext;
@property (nonatomic) unsigned long long bussinessType;
@property (retain, nonatomic) id<AWEShowBottomButtonPluginHubProtocol> hub;
@property (retain, nonatomic) AWEShowBottomButtonSceneManager *sceneManager;
@property (retain, nonatomic) NSMutableDictionary *interactionEventHandlers;
@property (nonatomic, getter=isAutoUnlockLaunched) BOOL autoUnlockLaunched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paidStream:(id)a0 didAcquirePaidAuthWithPaidAuthItems:(id)a1;
- (void)willExitPaymentPageWithPaidStream:(id)a0;
- (id)initWithView:(id)a0 context:(id)a1 businessType:(unsigned long long)a2;
- (void)switchToScene:(id)a0 enableAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (long long)getIndexForCurrentSceneWithPluginType:(unsigned long long)a0;
- (id)hub:(id)a0 getPluginTrackParamsForType:(unsigned long long)a1;
- (id)hub:(id)a0 getPluginSchemaParamsForType:(unsigned long long)a1;
- (void)addHubEvent;
- (void)configScene;
- (void)addInteractionEvent;
- (id)getParamsForPluginType:(unsigned long long)a0;
- (void)handleButtonClickAtIndex:(long long)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
