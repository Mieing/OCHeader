@class NSString;
@protocol BDXBridgeContainerProtocol;

@interface IESLLVIRStrategySmartLynxContainerObserver : NSObject <IESLLVIRStrategyResultDispatcherObserver>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
