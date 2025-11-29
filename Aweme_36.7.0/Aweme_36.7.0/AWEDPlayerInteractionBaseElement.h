@class UIView, UIViewController, NSString, AWEAwemeModel, AWEDPlayerVideoModel, AWEDPlayerActionComponent, AWEDPlayerGeneralElementConfig;
@protocol AWEDPlayerInteractionDispatchProtocol, AWEDPlayerViewControllerProtocol, AWEDPlayerInteractionViewProtocol, AWEDPlayerActionDelegate;

@interface AWEDPlayerInteractionBaseElement : AWEBaseElement <AWEDPlayerInteractionDispatchProtocol>

@property (retain, nonatomic) AWEDPlayerActionComponent *actionButton;
@property (retain, nonatomic) AWEDPlayerGeneralElementConfig *elementConfig;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEDPlayerVideoModel *videoModel;
@property (weak, nonatomic) id<AWEDPlayerActionDelegate> actionDelegate;
@property (nonatomic) BOOL hasSetAppear;
@property (readonly, weak, nonatomic) UIView<AWEDPlayerInteractionViewProtocol, AWEDPlayerInteractionDispatchProtocol> *container;
@property (readonly, weak, nonatomic) UIViewController<AWEDPlayerViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHide:(BOOL)a0;
- (void)setAppear:(BOOL)a0;
- (id)activateInfoWithData:(id)a0;
- (struct CGSize { double x0; double x1; })actionButtonSize;
- (void)updateForSimplePlayerWithVideoModel:(id)a0;
- (void)updateDPlayerState:(unsigned long long)a0;
- (BOOL)useGeneralActionButton;
- (id)actionButtonImage;
- (void)handleClickActionButton;
- (id)actionAccessibilityLabel;
- (id)activateInfoForSimplePlayerWithVideoModel:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (unsigned long long)elementType;
- (void)reset;
- (void)viewDidLoad;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })hitTestEdgeInsets;
- (id)context;

@end
