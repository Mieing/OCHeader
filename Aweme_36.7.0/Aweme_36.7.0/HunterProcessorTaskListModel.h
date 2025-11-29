@class NSString, NSArray, NSDictionary, HunterSchemaProcessorParamsModel;

@interface HunterProcessorTaskListModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *JSBName;
@property (copy, nonatomic) NSArray *inject;
@property (copy, nonatomic) NSDictionary *JSBParams;
@property (copy, nonatomic) HunterSchemaProcessorParamsModel *params;
@property (nonatomic) BOOL enableGlobalJSB;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
