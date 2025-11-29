@class IESLiveSubscription, NSString;
@protocol IESLiveSubscriber;

@interface IESLiveTransformInnerSubscriber : NSObject <IESLiveSubscriber>

@property (retain, nonatomic) id<IESLiveSubscriber> downtream;
@property (copy, nonatomic) id transform;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long skipedCount;
@property (retain, nonatomic) id lastValue;
@property (retain, nonatomic) IESLiveSubscription *throttleSubscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)a0;
- (void)receiveDisposal;
- (void)receiveLastValue:(id)a0;
- (id)preshDwonStreamAfter:(double)a0;
- (id)initWithDownstream:(id)a0 transform:(id)a1 type:(long long)a2;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;

@end
