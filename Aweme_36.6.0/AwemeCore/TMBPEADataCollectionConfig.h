@class NSArray, NSDictionary;

@interface TMBPEADataCollectionConfig : TMModuleConfig

@property (copy, nonatomic) NSArray *pipelines;
@property (copy, nonatomic) NSDictionary *errorStrategy;
@property (copy, nonatomic) NSDictionary *limit;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
