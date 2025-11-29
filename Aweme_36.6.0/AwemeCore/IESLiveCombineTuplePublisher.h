@class NSArray;

@interface IESLiveCombineTuplePublisher : IESLivePublisher

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *upstreamList;

- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)initWithUpstreamList:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;

@end
