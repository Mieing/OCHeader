@class NSDictionary;

@interface APBToygerBaseConfig : NSObject

@property (copy, nonatomic) NSDictionary *rawData;

- (void)parseProperty;
- (id)numberArrayForKey:(id)a0;
- (void).cxx_destruct;
- (id)stringValueForKey:(id)a0;
- (id)numberValueForKey:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)stringArrayForKey:(id)a0;

@end
