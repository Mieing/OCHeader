@class NSString;
@protocol IESLiveSubscription;

@interface IESLiveBlockSubscriber : NSObject <IESLiveSubscriber>

@property (copy, nonatomic) id /* block */ valueCallback;
@property (copy, nonatomic) id /* block */ completedBlock;
@property (retain, nonatomic) id<IESLiveSubscription> subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)a0;
- (void)receiveDisposal;
- (id)initWithValueCallback:(id /* block */)a0;
- (id)initWithValueCallback:(id /* block */)a0 completedCallback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;

@end
