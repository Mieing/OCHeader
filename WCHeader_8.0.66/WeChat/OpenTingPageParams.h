@class NSDictionary;

@interface OpenTingPageParams : NSObject

@property (copy, nonatomic) NSDictionary *params;

+ (id)makeWithParams:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
