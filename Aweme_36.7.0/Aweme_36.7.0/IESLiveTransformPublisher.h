@protocol IESLivePublisher;

@interface IESLiveTransformPublisher : IESLivePublisher

@property (retain, nonatomic) id<IESLivePublisher> upstream;
@property (copy, nonatomic) id transform;
@property (nonatomic) long long type;

- (void)subscribe:(id)a0 bindingToSubscription:(id)a1;
- (id)initWithUpstream:(id)a0 transform:(id)a1 type:(long long)a2;
- (void).cxx_destruct;

@end
