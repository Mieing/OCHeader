@class WCFinderFeedArray;
@protocol WCFinderProfilePullableFeedViewModel;

@interface WCFinderProfileFeedOverfiewMoreFeedData : NSObject

@property (retain, nonatomic) id<WCFinderProfilePullableFeedViewModel> feedModel;
@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (nonatomic) BOOL isPullableModel;

- (void).cxx_destruct;

@end
