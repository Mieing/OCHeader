@class NSString, RACReplaySubject, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftDynamicPanelExchangeItem : NSObject <IESLiveGiftDynamicPanelExchangeRPCService, IESLiveIncomeResultUpdateAction, IESLiveAioLinkRechargeActionUseCase, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) RACReplaySubject *exchangeInfoPublisher;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)lynxData;
- (void)incomeResultDidUpdate;
- (void)p_bindAction;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)observeExchangeInfo;
- (void)openRechargeDialog;
- (id)exchangeInfo;
- (BOOL)shouldShowPersonalWealth;
- (void)sendExchangeInfo;
- (void).cxx_destruct;

@end
