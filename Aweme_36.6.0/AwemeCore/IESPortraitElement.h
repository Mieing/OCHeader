@interface IESPortraitElement : NSObject

@property (retain, nonatomic) id value;

+ (id)elementWithValue:(id)a0;
+ (BOOL)isValidValue:(id)a0;

- (id)asNumberWithDefault:(id)a0;
- (id)asStringWithDefault:(id)a0;
- (id)asDictionaryWithDefault:(id)a0;
- (id)asArrayWithDefault:(id)a0;
- (BOOL)isPrimitive;
- (id)asDictionary;
- (void).cxx_destruct;
- (id)description;
- (id)asArray;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)asString;
- (id)asNumber;
- (BOOL)isEqualToElement:(id)a0;

@end
