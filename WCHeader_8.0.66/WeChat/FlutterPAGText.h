@class NSString;

@interface FlutterPAGText : NSObject

@property (copy, nonatomic) NSString *text;

+ (id)makeWithText:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
