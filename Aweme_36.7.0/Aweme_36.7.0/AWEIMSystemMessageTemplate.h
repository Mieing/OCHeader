@class NSString, AWEIMComponentManager;

@interface AWEIMSystemMessageTemplate : AWEIMFlexComponent <AWEIMFlexCellTemplateProtocol, AWEIMComponentManagerDependency, AWEIMComponentContainer, AWEIMMessageCellTemplateInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (id)lazyComponentsNameWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)onCellWillRenderForCurrentComponent;
- (void)afterRenderCellDidFinished;
- (void)assembeSubComponent;
- (id)bubblePresenter;
- (id)headerContainerPresenter;
- (void)updateTopBottomPadding:(double)a0 bottomPadding:(double)a1;
- (void)p_setupProps;
- (BOOL)p_isBlankGestureEnableFor:(id)a0;
- (BOOL)p_isGestureEnableFor:(id)a0;
- (void)p_updateUserInteractionEnabled;
- (id)longPressGesture;
- (void).cxx_destruct;
- (id)doubleTapGesture;
- (id)containerView;
- (id)bubbleView;

@end
