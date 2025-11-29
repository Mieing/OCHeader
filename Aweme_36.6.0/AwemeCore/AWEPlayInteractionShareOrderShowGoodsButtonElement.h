@class UIButton, NSString, UIView;

@interface AWEPlayInteractionShareOrderShowGoodsButtonElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIButton *showGoodsButton;
@property (retain, nonatomic) UIView *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)trackEntranceShow;
- (void)transferToGoodsDetail;
- (void)vitalizeButton:(BOOL)a0;
- (id)getGoodsPanelParamsFromAweme:(id)a0;
- (void)trackEntranceClick;
- (void)dynamicWidthRemakeLayout;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
