@class NSString, AWEIMComponentManager;

@interface AWEIMMessageStandardQuoteComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithContext:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_createPresenter;
- (void)p_updateProps;
- (void)didTapQuoteBody;
- (id)standardQuoteUIComponentsNameArray;
- (id)businessComponentsNameArray;
- (void).cxx_destruct;
- (id)currentMessage;

@end
