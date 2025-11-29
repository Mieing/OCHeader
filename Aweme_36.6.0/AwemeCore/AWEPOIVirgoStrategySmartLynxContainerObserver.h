@class NSString;
@protocol BDXBridgeContainerProtocol;

@interface AWEPOIVirgoStrategySmartLynxContainerObserver : NSObject <AWEPOIStrategyUpdatesObserver>

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
