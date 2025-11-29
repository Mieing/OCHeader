@protocol IESLiveSubscription, IESLivePublisher;

@interface IESLiveTakeUntilPublisher : IESLivePublisher

@property (retain, nonatomic) id<IESLivePublisher> upstream;
@property (retain, nonatomic) id<IESLiveSubscription> externalSubscription;

- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)initWithUpstream:(id)a0 subscription:(id)a1;
- (void).cxx_destruct;

@end
