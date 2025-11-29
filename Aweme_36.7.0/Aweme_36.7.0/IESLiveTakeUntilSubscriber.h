@class NSString;
@protocol IESLiveSubscriber, IESLiveSubscription;

@interface IESLiveTakeUntilSubscriber : NSObject <IESLiveSubscriber>

@property (retain, nonatomic) id<IESLiveSubscriber> downtream;
@property (retain, nonatomic) id<IESLiveSubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)a0;
- (void)receiveDisposal;
- (id)initWithDownstream:(id)a0 subscription:(id)a1;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;

@end
