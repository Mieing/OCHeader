@class HTSEventContext, NSString, IESLiveComponentContext, UIView, UIButton;
@protocol IESLiveRoomService, IESHYContainerProtocol;

@interface IESLivePaywallTicketCardView : UIView <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveComponentContext *context;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (copy, nonatomic) id /* block */ closeAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleClose:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (id)initWithRoom:(id)a0 trackContext:(id)a1 componentContext:(id)a2;
- (id)appendQueryURLWithBaseUrl:(id)a0;
- (void)renderWithLynxUrl:(id)a0 fallbackUrl:(id)a1;
- (void).cxx_destruct;
- (id)viewType;

@end
