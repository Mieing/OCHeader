@class NSArray, NSString;

@interface AWEMVLocalExperimentConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *experiments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)experimentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
