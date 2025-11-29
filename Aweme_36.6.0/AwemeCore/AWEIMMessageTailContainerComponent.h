@class NSString, AWEIMComponentManager;

@interface AWEIMMessageTailContainerComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)p_updateProps;
- (void).cxx_destruct;

@end
