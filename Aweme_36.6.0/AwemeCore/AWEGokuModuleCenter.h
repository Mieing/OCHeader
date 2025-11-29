@interface AWEGokuModuleCenter : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedCenter;

- (id)safePerformAction:(SEL)a0 target:(id)a1 params:(id)a2;
- (void)dispatchEvent:(SEL)a0 params:(id)a1 module:(unsigned long long)a2;
- (id)init;

@end
