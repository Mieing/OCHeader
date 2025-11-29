@class FinderPaidCollectionInfo;

@interface WCFinderPaidCollectionConsumeAdapter : NSObject

@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (nonatomic) int collectionType;

- (id)initWithPaidCollectionInfo:(id)a0;
- (void)fetchPurchaseBillWithFinderUsername:(id)a0 sourceFeedID:(id)a1 reportScene:(int)a2 successBlock:(id /* block */)a3 failBlock:(id /* block */)a4;
- (int)wecoinBusinessID;
- (id)productTitle;
- (id)productInsufficientTitle;
- (id)consumeAggrementString;
- (id)consumeFailTips;
- (id)consumeSuccTips;
- (id)consumeTimeoutTips;
- (id)consumeRepeatTips;
- (void).cxx_destruct;

@end
