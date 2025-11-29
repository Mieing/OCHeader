@class NSString, AWEIMComponentManager;
@protocol AWEIMMessageListModuleAssembly;

@interface AWEIMMessageListModule : AWEIMComponentBase <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) id<AWEIMMessageListModuleAssembly> assembly;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
