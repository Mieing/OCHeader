@class NSMapTable;

@interface IESSCImageReferenceCache : NSObject

@property (retain, nonatomic) NSMapTable *imageCacheTable;

+ (id)shared;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)saveObject:(id)a0 forKey:(id)a1;

@end
