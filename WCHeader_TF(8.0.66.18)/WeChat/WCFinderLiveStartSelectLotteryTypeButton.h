@interface WCFinderLiveStartSelectLotteryTypeButton : MMUIButton

@property (nonatomic) int lotteryType;
@property (copy, nonatomic) id /* block */ selectButtonBlock;

+ (id)getSelectLotteryTypeButton;

- (id)getTitleWithType:(int)a0;
- (void)chooseWithType:(int)a0;
- (void)updateWithType:(int)a0;
- (void).cxx_destruct;

@end
