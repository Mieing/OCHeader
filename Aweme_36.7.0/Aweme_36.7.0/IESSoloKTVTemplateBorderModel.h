@class NSString, IESSoloKTVTemplateColorItemModel;

@interface IESSoloKTVTemplateBorderModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESSoloKTVTemplateColorItemModel *color;
@property (nonatomic) int size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
