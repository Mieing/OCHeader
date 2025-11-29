@class NSArray;

@interface TMBPEADataCollectionPipeline : NSObject

@property (copy, nonatomic) NSArray *config;

+ (id)defaultPipelines;

- (id)pipelineUnits;
- (id)getUnitWithConfig:(id)a0;
- (Class)strtegyUnit:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
