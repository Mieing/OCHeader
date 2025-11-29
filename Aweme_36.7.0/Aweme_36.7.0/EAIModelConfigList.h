@class NSArray, NSString;

@interface EAIModelConfigList : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *modelList;
@property (retain, nonatomic) NSArray *cloudInfoList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelListJSONTransformer;
+ (id)cloudInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
