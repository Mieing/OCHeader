@class NSMutableDictionary;

@interface IESECLiveKVStorage : NSObject

@property (retain, nonatomic) NSMutableDictionary *storage;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (id)numberValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dictionaryValueForKey:(id)a0;

@end
