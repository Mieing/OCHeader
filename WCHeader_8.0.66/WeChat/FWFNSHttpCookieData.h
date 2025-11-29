@class NSArray;

@interface FWFNSHttpCookieData : NSObject

@property (copy, nonatomic) NSArray *propertyKeys;
@property (copy, nonatomic) NSArray *propertyValues;

+ (id)makeWithPropertyKeys:(id)a0 propertyValues:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
