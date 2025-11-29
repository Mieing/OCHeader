@class NSArray;

@interface AWENearbyFeedPreRequestModel : NSObject

@property (nonatomic) BOOL isReqOnAir;
@property (copy, nonatomic) NSArray *dataWillShowInFmp;
@property (copy, nonatomic) id /* block */ completionWhenWillEnterNearby;

- (void).cxx_destruct;

@end
