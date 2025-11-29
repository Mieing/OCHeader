@class BDXBridgeEventSubscriber;

@interface CJPayUnifyVerifyAccountAppealService : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (copy, nonatomic) id /* block */ completion;

- (void)p_subscribeEvent;
- (void)p_unsubscribeEvent;
- (void)gotoAccountAppealWithUrl:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
