@class IESECXBridgeEventSubscriber, IESECLiveContext, NSString, IESECLiveCardViewModelV2, IESECLiveCardModelManagerV2, IESECLiveCardContainerServiceV2;
@protocol IESECLiveCardViewDelegate, IESECLiveCardContainerDelegate;

@interface IESECLiveCardModuleV2 : NSObject <IESECLiveCardModelManagerDelegate, IESECLiveCardModuleInterfaceV2, IESECLiveCardSchedulerBizActionDelegateV2>

@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (nonatomic) long long enterFromSource;
@property (retain, nonatomic) IESECLiveCardModelManagerV2 *cardModelManager;
@property (retain, nonatomic) IESECLiveCardContainerServiceV2 *containerService;
@property (retain, nonatomic) IESECXBridgeEventSubscriber *closeCardSubscriber;
@property (weak, nonatomic) id<IESECLiveCardContainerDelegate> containerDelegate;
@property (weak, nonatomic) id<IESECLiveCardViewDelegate> cardViewDelegate;
@property (retain, nonatomic) IESECLiveCardViewModelV2 *currentCardViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleWithLiveRoomCoreParams:(id)a0 cardViewDelegate:(id)a1 containerDelegate:(id)a2 source:(long long)a3;

- (void)addLynxEventSubscriber;
- (void)handleOrientationIfNeeded;
- (void)closeCardWithID:(id)a0 withReason:(long long)a1;
- (void)closeCurrentCardWithReason:(long long)a0;
- (void)closeAllCard;
- (void)closeCurrentCard;
- (void)closeCardWithPromotionID:(id)a0;
- (id)cardRequestPathWithEnterRoom:(BOOL)a0;
- (void)cardModelManager:(id)a0 readyShowWithCardViewModel:(id)a1;
- (void)cardModelManager:(id)a0 popDisappearWithPromotionID:(id)a1;
- (void)fetchCardOnEnter:(BOOL)a0 baseURL:(id)a1 requestPath:(id)a2 showWithCompletion:(id /* block */)a3;
- (id)initWithLiveContext:(id)a0 cardContainerDelegate:(id)a1 cardViewDelegate:(id)a2 source:(long long)a3;
- (void)fetchCardWithRequestParams:(id)a0;
- (void)showCardByPreload;
- (void)fetchCardWithEnterRoom:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
