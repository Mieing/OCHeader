@class NSMutableDictionary;

@interface IESGurdResourceModelManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *resourceModelsMap;

+ (id)sharedManager;

- (void)addModels:(id)a0;
- (id)modelsWithLazyParams:(id)a0;
- (id)getModel:(id)a0 channel:(id)a1;
- (void)removeModel:(id)a0 channel:(id)a1 version:(unsigned long long)a2;
- (void)removeModel:(id)a0 channel:(id)a1;
- (id)allAccessKeyModels;
- (void)addModelWithoutLock:(id)a0;
- (void)clearAllModel;
- (void).cxx_destruct;
- (void)addModel:(id)a0;

@end
