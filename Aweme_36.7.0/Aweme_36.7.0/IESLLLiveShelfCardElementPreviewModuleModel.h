@class IESLLLiveShelfElementTextModel, IESLLLiveShelfElementMediaModel, NSString, NSArray;

@interface IESLLLiveShelfCardElementPreviewModuleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLLLiveShelfElementTextModel *title;
@property (retain, nonatomic) IESLLLiveShelfElementMediaModel *titleImage;
@property (retain, nonatomic) IESLLLiveShelfElementTextModel *summaryText;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *previewImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
