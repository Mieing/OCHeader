@class NSData, NSMutableArray;
@protocol MMFinderLivePurchasedFeedViewModelDelegate;

@interface MMFinderLivePurchasedFeedViewModel : NSObject

@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int purchasedFeedsTotalCount;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasMoreData;
@property (weak, nonatomic) id<MMFinderLivePurchasedFeedViewModelDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *purchasedFeedsList;

- (id)init;
- (void)resetAndFetchPurchasedFeedsList;
- (void)fetchNextPurchasedFeedsList;
- (void).cxx_destruct;

@end
