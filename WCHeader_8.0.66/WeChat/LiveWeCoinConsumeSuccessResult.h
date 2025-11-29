@class NSNumber;

@interface LiveWeCoinConsumeSuccessResult : NSObject

@property (retain, nonatomic) NSNumber *balance;

+ (id)makeWithBalance:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
