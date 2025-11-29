@class MMFinderLivePromoteDisplayLeaseToken;

@interface MMFinderLivePromoteDisplayWeakTokenLease : MMFinderLivePromoteDisplayLease

@property (weak, nonatomic) MMFinderLivePromoteDisplayLeaseToken *weakToken;

- (id)token;
- (void)setToken:(id)a0;
- (void).cxx_destruct;

@end
