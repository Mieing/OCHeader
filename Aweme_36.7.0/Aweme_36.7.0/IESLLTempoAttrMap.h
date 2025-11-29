@class NSDictionary;

@interface IESLLTempoAttrMap : NSObject

@property (retain, nonatomic) NSDictionary *map;

- (id)arrayValueForKey:(id)a0;
- (long long)integerValueForKey:(id)a0 default:(long long)a1;
- (BOOL)boolValueForKey:(id)a0 default:(BOOL)a1;
- (double)doubleValueForKey:(id)a0 default:(double)a1;
- (float)floatValueForKey:(id)a0 default:(float)a1;
- (id)stringValueForKey:(id)a0 default:(id)a1;
- (id)rawMap;
- (float)floatValueForKey:(id)a0;
- (void).cxx_destruct;
- (long long)integerValueForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)stringValueForKey:(id)a0;
- (id)numberValueForKey:(id)a0;
- (BOOL)boolValueForKey:(id)a0;
- (double)doubleValueForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMap:(id)a0;
- (id)dictionaryValueForKey:(id)a0;

@end
