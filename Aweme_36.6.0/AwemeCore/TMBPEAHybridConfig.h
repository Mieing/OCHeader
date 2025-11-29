@class NSDictionary;

@interface TMBPEAHybridConfig : TMBPEADataCollectionConfig

@property (copy, nonatomic) NSDictionary *contextConfig;

+ (id)configKey;

- (Class)moduleClass;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
