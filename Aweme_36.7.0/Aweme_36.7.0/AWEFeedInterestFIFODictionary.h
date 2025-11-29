@class NSMutableDictionary, NSMutableArray;

@interface AWEFeedInterestFIFODictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *storageDictionary;
@property (retain, nonatomic) NSMutableArray *keyOrder;
@property (nonatomic) unsigned long long privateCapacity;

- (void)enforceCapacityLimit;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithMaxCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
