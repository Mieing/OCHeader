@class IESIMInputBlockView, NSString;
@protocol AWEIMMessageListInputModuleInterface, AWEIMMessageListFooterInterface;

@interface IESIMGroupDissolveBlockInputBarComponent : AWEIMComponentBase <AWEIMMessageListBackgroundAction>

@property (nonatomic) BOOL isBlocked;
@property (retain, nonatomic) IESIMInputBlockView *blockView;
@property (weak, nonatomic) id<AWEIMMessageListFooterInterface> footerService;
@property (weak, nonatomic) id<AWEIMMessageListInputModuleInterface> inputService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (void)messageListBackgroundImageDidUpdated:(id)a0;
- (void)themeDidReload;
- (void)p_updateDissolveIfNeed;
- (void)p_updateInputBlockViewBackground;
- (void).cxx_destruct;

@end
