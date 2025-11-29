@class NSString, IESLiveGiftPanelDataSharing, BDXBridgeEventSubscriber, IESLiveGiftRecipientSectionViewModel, IESLiveCombineSubject;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftDynamicPanelReceiverItem : NSObject <IESLiveAioLinkGiftReceiverDataService, IESLiveAioLinkGiftReceiverActionUseCase, IESLiveGiftDynamicPanelItemProtocol>

@property (retain, nonatomic) IESLiveGiftPanelDataSharing *giftPanelDataSharing;
@property (retain, nonatomic) IESLiveCombineSubject *receiverModePublisher;
@property (retain, nonatomic) IESLiveCombineSubject *receiverListPublisher;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *viewModel;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)lynxData;
- (void)subscribeEvent;
- (id)initWithGiftPanelDataSharing:(id)a0;
- (id)receiverList;
- (id)recipientData;
- (BOOL)enableShowRecipientView;
- (id)observeReceiverMode;
- (id)observeEntranceReceiverList;
- (void)selectReceiver:(id)a0;
- (void)sendReceiverList;
- (BOOL)enableMultiReceiver;
- (void).cxx_destruct;
- (void)dealloc;

@end
