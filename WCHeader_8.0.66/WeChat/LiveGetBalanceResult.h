@class NSNumber;

@interface LiveGetBalanceResult : NSObject

@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSNumber *success;

+ (id)makeWithNumber:(id)a0 success:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
