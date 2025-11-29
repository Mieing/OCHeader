@class NSString;

@interface IESLiveGiftMsgAggregateResult : NSObject

@property (nonatomic) long long giftId;
@property (nonatomic) long long count;
@property (nonatomic) long long unitPrice;
@property (copy, nonatomic) NSString *fromUserId;

- (id)initWithGiftId:(long long)a0 count:(long long)a1 unitPrice:(long long)a2 fromUserId:(id)a3;
- (void).cxx_destruct;

@end
