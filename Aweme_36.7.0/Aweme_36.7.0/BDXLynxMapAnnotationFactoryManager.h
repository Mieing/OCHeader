@class NSString, NSArray;

@interface BDXLynxMapAnnotationFactoryManager : NSObject <BDXLynxMapAnnotationFactory> {
    NSArray *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithAnnotationFactories:(id)a0;

- (BOOL)canAnnotateForBridgeModels:(id)a0;
- (id)annotationsWithBridgeModels:(id)a0;
- (void).cxx_destruct;

@end
