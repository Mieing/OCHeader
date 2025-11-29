@class NSString, AWEIMComponentContext, AWEIMComponentManager;

@interface AWEIMRootComponent : NSObject <AWEIMComponentContainer, AWEIMComponentManagerDependency>

@property (retain, nonatomic) AWEIMComponentContext *componentContext;
@property (retain, nonatomic) AWEIMComponentManager *componentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;
+ (id)context;

@end
