@class LiveWeCoinConsumeErrorTypeBox;

@interface LiveWeCoinConsumeError : NSObject

@property (retain, nonatomic) LiveWeCoinConsumeErrorTypeBox *type;

+ (id)makeWithType:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
