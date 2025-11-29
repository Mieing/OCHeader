@class NSNumber, LiveWeCoinBuyCoinModeBox;

@interface LiveWeCoinBuyCoinParameter : NSObject

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) LiveWeCoinBuyCoinModeBox *consumeMode;
@property (retain, nonatomic) NSNumber *diffWecoinCount;

+ (id)makeWithBusinessId:(id)a0 consumeMode:(id)a1 diffWecoinCount:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
