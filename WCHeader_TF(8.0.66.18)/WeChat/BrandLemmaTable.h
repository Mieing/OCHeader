@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface BrandLemmaTable : NSObject

@property (retain, nonatomic) NSRecursiveLock *accessLock;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSMutableDictionary *keyToEntry;

- (id)initWithPath:(id)a0;
- (void)constructMapping;
- (id)getLemmaForKey:(id)a0 type:(unsigned int)a1 locale:(id)a2;
- (void).cxx_destruct;

@end
