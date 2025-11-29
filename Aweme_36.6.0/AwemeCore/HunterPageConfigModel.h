@class HunterSchemaProcessorsModel, NSArray, NSString, HunterClientDataProcessorsModel;

@interface HunterPageConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sceneInfos;
@property (copy, nonatomic) NSArray *pageInfos;
@property (retain, nonatomic) HunterSchemaProcessorsModel *schemaProcessors;
@property (retain, nonatomic) HunterClientDataProcessorsModel *clientDataProcessors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneInfosJSONTransformer;
+ (id)pageInfosJSONTransformer;
+ (id)schemaProcessorsJSONTransformer;
+ (id)clientDataProcessorsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
