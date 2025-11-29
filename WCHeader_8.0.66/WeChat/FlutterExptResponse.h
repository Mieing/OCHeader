@class NSString;

@interface FlutterExptResponse : NSObject

@property (copy, nonatomic) NSString *result;

+ (id)makeWithResult:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
