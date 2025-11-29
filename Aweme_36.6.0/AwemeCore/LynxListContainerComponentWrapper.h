@class AWESearchAutoPlayHandler, NSString, LynxUIComponent, SearchListContainerComponentWrapper;

@interface LynxListContainerComponentWrapper : UIView <AWESearchAutoPlayCardProtocol>

@property (weak, nonatomic) SearchListContainerComponentWrapper *bridgeWrapper;
@property (nonatomic) BOOL isActive;
@property (weak, nonatomic) AWESearchAutoPlayHandler *autoPlayHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) LynxUIComponent *holdingUI;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAlignedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)addListItemView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 addSubLayers:(BOOL)a2 adjustLayersFrame:(BOOL)a3;
- (void)sendEventToComponent:(id)a0 detail:(id)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)didResignActive;
- (id)activeView;

@end
