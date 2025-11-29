@class NSString, IESLiveGiftPanelDataSharing, IESLiveNewGiftPanelContext, UIView, IESLiveGiftDynamicPanelOperationViewModel, IESLiveGiftDynamicPanelOperationView;
@protocol IESLiveNewGiftPanelItemProtocol;

@interface IESLiveDynamicGiftPanelItem : NSObject <HTSLiveGiftActions, IESLiveNewGiftPanelItemProtocol>

@property (retain, nonatomic) IESLiveNewGiftPanelContext *context;
@property (retain, nonatomic) id<IESLiveNewGiftPanelItemProtocol> current;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) IESLiveGiftDynamicPanelOperationViewModel *viewModel;
@property (retain, nonatomic) IESLiveGiftDynamicPanelOperationView *panelView;
@property (weak, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;
@property (nonatomic) BOOL delayLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShow:(id)a0 diContext:(id)a1;

- (void)didSetAttachingDIContext;
- (void)giftViewWillShow;
- (void)updatePanelDataSharing:(id)a0;
- (id)initWithPanelContext:(id)a0;
- (void)loadLynxView;
- (id)panelDI;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
