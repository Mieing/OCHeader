@class NSString, NSMutableDictionary;

@interface IESLiveEffectMessageDispatcherProviderImp : NSObject <IESLiveEffectMessageDispatcherProvider, IESLiveEffectMessageDispatcher>

@property (retain, nonatomic) NSMutableDictionary *subscriberDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addSubscriber:(id)a0 forMessages:(id)a1;
- (void)combineDisposableForAddEffectMessageSubscriber:(id)a0 forMessages:(id)a1;
- (void)unsubscribe:(id)a0 forMessages:(id)a1;
- (void)didReceiveMessage:(id)a0 arg1:(unsigned long long)a1 arg2:(unsigned long long)a2 data:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
