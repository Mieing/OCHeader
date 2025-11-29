@interface YataEventChain.EventChainBridge : NSObject {
    void /* unknown type, empty encoding */ eventChain;
}

- (id)initWithBizCode:(id)a0 service:(id)a1 switchConfig:(id)a2;
- (void)setModifyContextDelegate:(id)a0;
- (void)setInterceptorDelegate:(id)a0;
- (void)registerEventImpl:(id)a0;
- (void)dispatchEventChainWithChainInput:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setErrorDelegate:(id)a0;

@end
