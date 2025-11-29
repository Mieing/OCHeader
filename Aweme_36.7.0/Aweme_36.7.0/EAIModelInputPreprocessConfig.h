@class NSString, NSDictionary;

@interface EAIModelInputPreprocessConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *standardscaler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
