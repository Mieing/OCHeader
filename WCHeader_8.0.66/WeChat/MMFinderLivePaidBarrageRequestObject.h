@class NSString;

@interface MMFinderLivePaidBarrageRequestObject : MMFinderLivePayRequestObject

@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int rewardCount;

- (void)retrieveBillToPayWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
