@class NSArray, NSString;

@interface EAIModelSchemaIn : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *keyList;
@property (retain, nonatomic) NSArray *preprocess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyListJSONTransformer;
+ (id)preprocessJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
