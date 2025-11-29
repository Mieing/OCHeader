@class NSMutableDictionary;
@protocol BDNativeWebBridgeManagerDelegate;

@interface BDNativeWebBridgeManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *invokeDic;
@property (weak, nonatomic) id<BDNativeWebBridgeManagerDelegate> delegate;

- (void)handleInvokeMessage:(id)a0;
- (void)handleCallBackMessage:(id)a0;
- (void)registerHandler:(id /* block */)a0 forName:(id)a1;
- (void)handleMixRenderMessage:(id)a0;
- (void)registerHandler:(id /* block */)a0 bridgeName:(id)a1;
- (id)messageJSONStringByDic:(id)a0;
- (void).cxx_destruct;

@end
