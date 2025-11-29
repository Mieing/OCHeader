@class NSString;

@interface FlutterExptRequest : NSObject

@property (copy, nonatomic) NSString *key;

+ (id)makeWithKey:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
