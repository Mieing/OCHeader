@class NSString, NSArray;

@interface BDXLynxMapOverlayFactoryManager : NSObject <BDXLynxMapOverlayFactory> {
    NSArray *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithOverlayFactories:(id)a0;

- (BOOL)canGenerateOverlayForBridgeModels:(id)a0;
- (void)generateOverlaysWithBridgeModels:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
