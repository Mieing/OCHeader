@class NSArray, NSString;
@protocol IESLiveSubscriber;

@interface IESLiveCombineTupleInnerSubscriber : NSObject <IESLiveSubscriber>

@property (nonatomic) unsigned long long type;
@property (weak, nonatomic) IESLiveCombineTupleInnerSubscriber *proxySubscriber;
@property (retain, nonatomic) NSArray *otherSubscribers;
@property (retain, nonatomic) id<IESLiveSubscriber> downtream;
@property (retain, nonatomic) id lastValue;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long triggerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)a0;
- (void)receiveDisposal;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0;
- (void)receiveSubscription:(id)a0;

@end
