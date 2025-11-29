@interface FWFWKWebsiteDataTypeEnumData : NSObject

@property (nonatomic) unsigned long long value;

+ (id)makeWithValue:(unsigned long long)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
