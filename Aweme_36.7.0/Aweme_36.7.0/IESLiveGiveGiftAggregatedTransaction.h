@class NSString, NSMutableSet;

@interface IESLiveGiveGiftAggregatedTransaction : NSObject

@property (nonatomic) long long sendCnt;
@property (nonatomic) long long sendGift;
@property (nonatomic) long long sendMoney;
@property (retain, nonatomic) NSMutableSet *transactions;
@property (copy, nonatomic) NSString *giftShowFrom;

- (void)enqueueTransaction:(id)a0;
- (void)dequeueTransaction:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;

@end
