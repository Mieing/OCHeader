@class NSArray, AWESimpleContainer;

@interface AFDMomentComponentManager : NSObject

@property (retain, nonatomic) NSArray *components;
@property (retain, nonatomic) AWESimpleContainer *serviceContainer;

- (id)initWithServiceContainer:(id)a0;
- (void)resolveWithComponentClassArray:(id)a0 customInit:(id /* block */)a1;
- (void)empty;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)forwardInvocation:(id)a0;

@end
