@class NSString, NSMutableDictionary;
@protocol RTVXREngine;

@interface RTVSEIMessageController : NSObject <RTVSEIMessageController>

@property (retain, nonatomic) NSMutableDictionary *messageObserverMap;
@property (copy, nonatomic) id /* block */ receiveCallBack;
@property (weak, nonatomic) id<RTVXREngine> xrEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)configWithXREnginer:(id)a0;
- (BOOL)sendSEIMessage:(id)a0 forKey:(id)a1;
- (void)addMessageObserver:(id)a0 forKey:(id)a1;
- (void)removeMessageObserver:(id)a0 forKey:(id)a1;
- (void)__handleReceiveSEIMessage:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
