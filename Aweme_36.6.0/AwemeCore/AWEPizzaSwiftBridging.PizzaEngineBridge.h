@class NSString;

@interface AWEPizzaSwiftBridging.PizzaEngineBridge : NSObject <AWEPzEngineProtocol> {
    void /* unknown type, empty encoding */ coreEngine;
}

@property (nonatomic, readonly) NSString *domainName;

- (id)generateComponentWithConfig:(id)a0;
- (void)asyncVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (id)selectComponents:(id)a0;
- (void)getComponentModelWithID:(id)a0 completion:(id /* block */)a1;
- (void)showComponent:(id)a0;
- (void)consumeComponent:(id)a0;
- (void)hideComponent:(id)a0;
- (void)queryComponentModelListWithComponentType:(id)a0 completion:(id /* block */)a1;
- (void)registerVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (void)strategyVerifyComponent:(id)a0 completion:(id /* block */)a1;
- (id)registerVerifyComponent:(id)a0;
- (id)strategyVerifyComponent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)addComponent:(id)a0;
- (void)removeComponent:(id)a0;

@end
