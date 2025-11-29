@class NSMutableSet;

@interface HMDStingerBlocker : NSObject

@property (retain, nonatomic) NSMutableSet *catchBlockSet;

+ (id)sharedInstance;

- (BOOL)hitBlockListForCls:(Class)a0 selector:(SEL)a1 isInstance:(BOOL)a2;
- (void)setupBlockSet;
- (void)excludeClassMethodForCls:(Class)a0 selector:(SEL)a1;
- (void)excludeInstanceMethodForCls:(Class)a0 selector:(SEL)a1;
- (BOOL)checkBlockForCls:(Class)a0 selector:(SEL)a1 isInstance:(BOOL)a2;
- (id)blockKeyForCls:(Class)a0 selector:(SEL)a1 isInstance:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;

@end
