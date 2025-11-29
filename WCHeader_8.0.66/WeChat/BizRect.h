@class NSNumber;

@interface BizRect : NSObject

@property (retain, nonatomic) NSNumber *left;
@property (retain, nonatomic) NSNumber *top;
@property (retain, nonatomic) NSNumber *right;
@property (retain, nonatomic) NSNumber *bottom;

+ (id)makeWithLeft:(id)a0 top:(id)a1 right:(id)a2 bottom:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
