@class LiveWeCoinBuyCoinResultStatusBox;

@interface LiveWeCoinBuyCoinResult : NSObject

@property (retain, nonatomic) LiveWeCoinBuyCoinResultStatusBox *status;

+ (id)makeWithStatus:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
