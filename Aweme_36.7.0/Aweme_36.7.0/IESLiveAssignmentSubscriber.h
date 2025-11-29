@class NSString;

@interface IESLiveAssignmentSubscriber : NSObject <IESLiveSubscriber>

@property (readonly, weak, nonatomic) id target;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveValue:(id)a0;
- (void)receiveDisposal;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithTarget:(id)a0 keyPath:(id)a1;

@end
