@class AWELiveShelfElementTextModel, NSString, NSArray, AWELiveShelfElementMediaModel;

@interface AWELiveShelfCardElementPreviewModuleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveShelfElementTextModel *title;
@property (retain, nonatomic) AWELiveShelfElementMediaModel *titleImage;
@property (retain, nonatomic) AWELiveShelfElementTextModel *summaryText;
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
