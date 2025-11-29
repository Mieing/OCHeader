@class NSMutableDictionary, IESLiveLinkmicLayoutConfigResourceManager;
@protocol IESLiveLinkmicLayoutLogger;

@interface IESLiveLinkmicLayoutEngine : NSObject

@property (retain, nonatomic) IESLiveLinkmicLayoutConfigResourceManager *resourceManager;
@property (retain, nonatomic) NSMutableDictionary *layoutCacheMap;
@property (weak, nonatomic) id<IESLiveLinkmicLayoutLogger> logger;

+ (id)shared;

- (void)buildLayout:(id)a0 completion:(id /* block */)a1;
- (void)checkFileWithLayout:(id)a0 completion:(id /* block */)a1;
- (void)findConfigFileName:(id)a0 completion:(id /* block */)a1;
- (id)orientationKeyWithInterfaceOrientation:(long long)a0;
- (void)findAllConfigFileName:(id)a0 completion:(id /* block */)a1;
- (void)findOffsetConfigFileName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
