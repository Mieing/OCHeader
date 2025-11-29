@class NSMutableDictionary;

@interface VCMDLCaseInsensitiveDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *originDict;
@property (retain, nonatomic) NSMutableDictionary *lowercaseKeyMap;

- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;

@end
