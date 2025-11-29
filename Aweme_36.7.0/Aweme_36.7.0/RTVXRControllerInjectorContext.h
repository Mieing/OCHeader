@class NSString;
@protocol RTVXRControllerModule;

@interface RTVXRControllerInjectorContext : NSObject

@property (readonly, nonatomic) id<RTVXRControllerModule> module;
@property (readonly, copy, nonatomic) NSString *parentScopeKey;

- (id)initWithModule:(id)a0 parentScopeKey:(id)a1;
- (void).cxx_destruct;

@end
