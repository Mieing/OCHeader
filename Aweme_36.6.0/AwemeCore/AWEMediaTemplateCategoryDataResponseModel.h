@class NSString, AWEMediaTemplateDataListResponseModel;

@interface AWEMediaTemplateCategoryDataResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long categoryID;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *categoryUri;
@property (retain, nonatomic) AWEMediaTemplateDataListResponseModel *dataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
