@class NSString, AWETemplateListPanelDataResponseModel, NSDictionary;

@interface AWETemplateFetchPanelResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) AWETemplateListPanelDataResponseModel *panelData;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)panelDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
