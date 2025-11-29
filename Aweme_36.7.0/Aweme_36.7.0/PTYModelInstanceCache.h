@class NSLock, NSMutableDictionary;

@interface PTYModelInstanceCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedInstance;

- (id)load:(id)a0 pop:(BOOL)a1;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
