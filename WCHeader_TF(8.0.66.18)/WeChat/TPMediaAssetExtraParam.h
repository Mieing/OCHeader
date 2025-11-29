@class NSMutableDictionary;

@interface TPMediaAssetExtraParam : NSObject

@property (retain, nonatomic) NSMutableDictionary *objectMap;

- (id)init;
- (void)setExtraIntValue:(long long)a0 forKey:(id)a1;
- (long long)intValueForKey:(id)a0;
- (void)setExtraStringValue:(id)a0 forKey:(id)a1;
- (id)stringValueForKey:(id)a0;
- (void)setExtraObjectValue:(id)a0 forKey:(id)a1;
- (id)objectValueForKey:(id)a0;
- (void).cxx_destruct;

@end
