@class NSNumber;

@interface AWEUserFollowingManager : NSObject

@property (retain, nonatomic) NSNumber *minTime;
@property (retain, nonatomic) NSNumber *maxTime;
@property (nonatomic) BOOL hasMore;

- (void)fetchUserFollowingWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
