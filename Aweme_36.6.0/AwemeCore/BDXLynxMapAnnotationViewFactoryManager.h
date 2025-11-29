@class NSString, NSArray;

@interface BDXLynxMapAnnotationViewFactoryManager : NSObject <BDXLynxMapAnnotationViewFactory> {
    NSArray *_factories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managerWithAnnotationViewFactories:(id)a0;

@end
