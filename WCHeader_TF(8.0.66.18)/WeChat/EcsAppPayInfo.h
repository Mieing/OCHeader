@class NSString;

@interface EcsAppPayInfo : NSObject

@property (copy, nonatomic) NSString *payPackage;
@property (copy, nonatomic) NSString *orderId;

+ (id)makeWithPayPackage:(id)a0 orderId:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
