@class NSArray, NSString, UIView, AWEIMComponentManager;
@protocol AWEIMMessageTabModeInterface, AWEIMTabSkeletonInterface, AWEIMChatListInterface;

@interface AWEIMChatListHeaderComponent : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency, AWEIMChatListHeaderInterface, AWEUserMessage>

@property (retain, nonatomic) NSArray *headerViewComponents;
@property (retain, nonatomic) UIView *headerContainerView;
@property (weak, nonatomic) id<AWEIMTabSkeletonInterface> tabSkeletonService;
@property (weak, nonatomic) id<AWEIMChatListInterface> chatListService;
@property (weak, nonatomic) id<AWEIMMessageTabModeInterface> messageTabModeService;
@property (copy) NSArray *headerIdentifiers;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEIMLGDOUYINLGCommonAdapterClass;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)didFinishLoginWithUid:(id)a0;
- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)reloadHeaderWithAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)reloadHeaderWithAnimation:(BOOL)a0 keepOffset:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)isHeaderFixedInMessageTab;
- (id)aAWEIMLGDOUYINLGCommonAdapter;
- (void)__didChangeMessageTabMode:(id)a0;
- (void)p_arrangementSubViews;
- (void).cxx_destruct;
- (void)dealloc;

@end
