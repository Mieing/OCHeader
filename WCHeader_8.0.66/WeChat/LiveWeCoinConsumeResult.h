@class LiveWeCoinConsumeSuccessResult, LiveWeCoinConsumeError, LiveWeCoinConsumeResultStatusBox;

@interface LiveWeCoinConsumeResult : NSObject

@property (retain, nonatomic) LiveWeCoinConsumeResultStatusBox *status;
@property (retain, nonatomic) LiveWeCoinConsumeSuccessResult *data;
@property (retain, nonatomic) LiveWeCoinConsumeError *error;

+ (id)makeWithStatus:(id)a0 data:(id)a1 error:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
