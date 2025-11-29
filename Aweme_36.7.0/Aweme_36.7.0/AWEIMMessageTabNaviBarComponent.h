@class NSArray, NSString, UIView, NSMutableArray, AWEIMComponentManager;
@protocol AWEIMMessageTabNaviBarAction, IESIMNavigationBarProtocol;

@interface AWEIMMessageTabNaviBarComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMMessageTabNaviBarInterface, AWEUserMessage>

@property (retain, nonatomic) NSArray *leftBtnComponents;
@property (retain, nonatomic) NSArray *leftSecondBtnComponents;
@property (retain, nonatomic) NSArray *rightFirstBtnComponents;
@property (retain, nonatomic) NSArray *rightSecondBtnComponents;
@property (retain, nonatomic) NSArray *plusBtnComponents;
@property (retain, nonatomic) NSArray *titleViewComponents;
@property (retain, nonatomic) NSMutableArray *hasAddDefaultActionButtons;
@property (weak, nonatomic) id<AWEIMMessageTabNaviBarAction> actionPublisher;
@property (weak, nonatomic) UIView<IESIMNavigationBarProtocol> *naviBar;
@property (retain, nonatomic) UIView *defaultTitleView;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)__didChangeMessageTabMode:(id)a0;
- (void)hiddenStatusBar:(BOOL)a0;
- (void)hiddenNavibar:(BOOL)a0;
- (BOOL)isNaviBarHidden;
- (id)currentTitleView;
- (void)reloadNaviTitleView;
- (void)p_setupNaviBar;
- (void)p_resolveButtonComponent;
- (void)p_layoutNaviButtons;
- (void)p_updateNaviBottomLine;
- (id)p_getCurrentNavigationTitleViewFromProvider:(id)a0;
- (id)p_getCustomNaviButtonViewFromProvider:(id)a0;
- (void)p_addNaviButtonDefaultAction:(id)a0;
- (void)p_defaultButtonClickAction:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
