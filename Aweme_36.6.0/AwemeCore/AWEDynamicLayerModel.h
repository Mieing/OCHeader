@class NSString, NSDictionary;

@interface AWEDynamicLayerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) int type;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSDictionary *templateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)mergeDataIntoTemplate:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
