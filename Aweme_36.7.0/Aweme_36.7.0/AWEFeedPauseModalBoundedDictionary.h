@class NSMutableDictionary, NSMutableArray;

@interface AWEFeedPauseModalBoundedDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;
@property (retain, nonatomic) NSMutableArray *keys;
@property (nonatomic) unsigned long long maxCapacity;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)removeForKey:(id)a0;

@end
