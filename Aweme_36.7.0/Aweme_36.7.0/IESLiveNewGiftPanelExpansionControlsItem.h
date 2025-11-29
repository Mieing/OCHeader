@class NSString, IESLiveNewGiftPanelContext, UIView, IESLiveNewGiftPanelLynxEventThroughView;
@protocol IESLiveSubscription, IESHYContainerProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveNewGiftPanelExpansionControlsItem : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveAioLinkRechargeActionUseCase, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) IESLiveNewGiftPanelLynxEventThroughView *view;
@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) id<IESLiveSubscription> disposable;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasUpdateWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)giftViewWillShow;
- (id)initialData;
- (id)initWithPanelContext:(id)a0;
- (void)loadLynxView;
- (void)p_bindAction;
- (void)openRechargeDialog;
- (void)observeExpansionControlsViewWidth;
- (void)initLynxViewIfNeeded;
- (void)p_sendSelectedGiftDiamond:(id)a0;
- (id)urlString;
- (void).cxx_destruct;
- (void)dealloc;

@end
