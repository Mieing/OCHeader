@class NSMutableDictionary, NSRecursiveLock;

@interface BDPLaunchDispatchCenter : NSObject

@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *dispatchClassList;

+ (void)registerDispatchObject:(Class)a0 type:(id)a1;
+ (id)containerControllerWithLaunchParam:(id)a0;
+ (Class)dispatchClassWithType:(id)a0;
+ (BOOL)dispatchWithLaunchParam:(id)a0;
+ (id)sharedCenter;

- (void)registerDispatchObject:(Class)a0 type:(id)a1;
- (id)containerControllerWithLaunchParam:(id)a0;
- (BOOL)dispatchWithLaunchParam:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
