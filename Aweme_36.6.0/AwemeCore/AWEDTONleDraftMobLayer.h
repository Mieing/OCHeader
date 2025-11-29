@class NSString;

@interface AWEDTONleDraftMobLayer : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *layerId;
@property (copy, nonatomic) NSString *layerType;
@property (copy, nonatomic) NSString *fontId;
@property (copy, nonatomic) NSString *fontName;
@property (copy, nonatomic) NSString *titleSource;
@property (copy, nonatomic) NSString *coverTemplateId;
@property (copy, nonatomic) NSString *textTemplateid;
@property (copy, nonatomic) NSString *titleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
