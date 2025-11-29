@class NSMutableDictionary;

@interface AWEPayPaymentCodeInnerPushManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *proxyMap;
@property (nonatomic) BOOL notiRegistered;

+ (id)manager;

- (void)onFrontierMessageReceived:(id)a0;
- (void)addObserver:(id)a0 msgType:(id)a1 callback:(id /* block */)a2;
- (void)removeObserver:(id)a0 msgType:(id)a1;
- (void).cxx_destruct;

@end
