@class NSMutableDictionary, NSRecursiveLock;

@interface BDPKryptonMergedAppHolder : NSObject

@property (retain, nonatomic) NSMutableDictionary *kryptonAppDict;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (id)kryptonAppWithKey:(id)a0;
- (void)addKryptonApp:(id)a0 withKey:(id)a1;
- (void)removeKryptonAppWithKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
