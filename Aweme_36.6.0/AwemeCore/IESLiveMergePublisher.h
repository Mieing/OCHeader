@class NSArray;

@interface IESLiveMergePublisher : IESLivePublisher

@property (copy, nonatomic) NSArray *upstreamList;

- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)initWithUpstreamList:(id)a0;
- (void).cxx_destruct;

@end
