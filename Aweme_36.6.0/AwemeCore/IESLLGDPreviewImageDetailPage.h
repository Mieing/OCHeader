@class NSDictionary, NSArray, NSString;

@interface IESLLGDPreviewImageDetailPage : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *commodityV2;
@property (retain, nonatomic) NSArray *head_image_tabs;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *itemGroupList;
@property (retain, nonatomic) NSDictionary *previewPayButton;
@property (nonatomic) long long previewOptGroup;
@property (retain, nonatomic) NSDictionary *previewPageLogParams;
@property (copy, nonatomic) NSString *previewPageSchema;
@property (copy, nonatomic) NSString *productName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
