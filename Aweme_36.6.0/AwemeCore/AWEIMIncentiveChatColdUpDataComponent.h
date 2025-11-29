@class NSString, AWEIMComponentManager;

@interface AWEIMIncentiveChatColdUpDataComponent : AWEIMComponentBase <AWEIMComponentManagerDependency, AWEIMComponentContainer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
