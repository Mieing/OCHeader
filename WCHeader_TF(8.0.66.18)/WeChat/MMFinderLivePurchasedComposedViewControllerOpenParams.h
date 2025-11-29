@class MMFinderLivePurchasedFeedViewModel, FinderJumpInfo;

@interface MMFinderLivePurchasedComposedViewControllerOpenParams : NSObject

@property (retain, nonatomic) MMFinderLivePurchasedFeedViewModel *livePurchasedFeedVM;
@property (retain, nonatomic) FinderJumpInfo *paidMicJumpInfo;
@property (nonatomic) unsigned long long livePurchasedCount;
@property (nonatomic) unsigned long long paidMicCount;

- (void).cxx_destruct;

@end
