@class TBSReadWriteLock, NSMutableDictionary;

@interface TBImagePool : NSObject

@property (retain, nonatomic) NSMutableDictionary *pool;
@property (retain, nonatomic) TBSReadWriteLock *lock;

- (id)imageForKey:(id)a0;
- (void)setImage:(id)a0 forKey:(id)a1;
- (void)removeImageForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
