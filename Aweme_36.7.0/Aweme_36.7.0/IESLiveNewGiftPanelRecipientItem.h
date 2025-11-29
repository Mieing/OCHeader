@class NSString, IESLiveNewGiftPanelContext, UIView, IESLiveGiftRecipientSectionViewModel;
@protocol IESLiveGiftModuleRecipientRouter;

@interface IESLiveNewGiftPanelRecipientItem : NSObject <IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) UIView *view;
@property (weak, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) IESLiveGiftRecipientSectionViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (id)initWithPanelContext:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)mount;

@end
