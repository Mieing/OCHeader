@class MMFinderLivePurchasedFeedViewModel, FinderJumpInfo;

@interface MMFinderLivePuchasedContentJumpParams : NSObject

@property (nonatomic) unsigned long long livePurchasedCount;
@property (nonatomic) unsigned long long memberPurchasedCount;
@property (nonatomic) unsigned long long paidCollectionCount;
@property (nonatomic) unsigned long long livePaidMicCount;
@property (retain, nonatomic) MMFinderLivePurchasedFeedViewModel *livePurchasedFeedVM;
@property (retain, nonatomic) FinderJumpInfo *livePaidMicJumpInfo;

- (id)descForLogging;
- (void).cxx_destruct;

@end
