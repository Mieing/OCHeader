@class IESGCPTimorBridgeRegister, NSArray, NSString;

@interface IESGCPTimorBridgeMessageDispatcher : NSObject <IESGCPTimorBridgeInterface>

@property (retain, nonatomic) IESGCPTimorBridgeRegister *bridgeRegister;
@property (copy, nonatomic) NSArray *supportedMethodList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)callMethod:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
