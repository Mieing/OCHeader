@class NSString;
@protocol IESLiveSubscriber;

@interface IESLiveMergeInnerSubscriber : NSObject <IESLiveSubscriber>

@property (retain, nonatomic) id<IESLiveSubscriber> downtream;
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
