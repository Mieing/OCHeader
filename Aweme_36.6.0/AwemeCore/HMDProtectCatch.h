@class NSMutableSet;

@interface HMDProtectCatch : NSObject

@property (retain, nonatomic) NSMutableSet *catchBlockSet;

+ (id)sharedInstance;

- (id)blockWithSignature:(const char *)a0 key:(id)a1;
- (id)catchMethodWithName:(id)a0;
- (void)trackCatchMethods;
- (id)catchClassMethod:(Class)a0 selector:(SEL)a1;
- (id)catchInstanceMethod:(Class)a0 selector:(SEL)a1;
- (void)registCallback:(id /* block */)a0;
- (void)catchMethodsWithNames:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
