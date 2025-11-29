@class NSNumber, NSString;

@interface EcsNativeRouterRequest : NSObject

@property (retain, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSString *params;

+ (id)makeWithType:(id)a0 params:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
