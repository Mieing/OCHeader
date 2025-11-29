@class NSString, AWEIMComponentManager;

@interface AWEIMMessageNameContainerComponent : AWEIMFlexComponent <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (id)componentsNameArrayWithContext:(id)a0;
- (void).cxx_destruct;

@end
