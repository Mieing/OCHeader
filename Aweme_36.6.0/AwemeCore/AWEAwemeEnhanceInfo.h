@class NSArray, NSString, AWEAwemeEnhanceConfig;

@interface AWEAwemeEnhanceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *confs;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *treatment;
@property (retain, nonatomic) AWEAwemeEnhanceConfig *enhanceConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)confsJSONTransformer;
+ (id)sourceJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
