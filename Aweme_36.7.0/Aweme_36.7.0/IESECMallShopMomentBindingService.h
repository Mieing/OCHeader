@class BDXBridgeEventSubscriber, NSString, IESECMallShopMomentContext;

@interface IESECMallShopMomentBindingService : NSObject <IESECUserMessage, IESECMallShopMomentBindingService>

@property (retain, nonatomic) IESECMallShopMomentContext *context;
@property (retain, nonatomic) BDXBridgeEventSubscriber *playControlSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL accountChange;
@property (copy, nonatomic) id /* block */ renderEndBlock;

- (id)uiService;
- (id)trackService;
- (void)updateGlobalProps;
- (void)didFinishHostLogin;
- (void)renderEnd;
- (void)commonBinding;
- (void)showToastIfNeeded:(id)a0;
- (void)cardDismiss:(id)a0;
- (void)setupShopFollowTabBinding;
- (void)setupMallShopMomentBinding;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
