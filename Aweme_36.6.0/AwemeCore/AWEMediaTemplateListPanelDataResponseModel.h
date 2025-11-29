@class NSString, NSArray, AWEMediaTemplateDataListResponseModel;

@interface AWEMediaTemplateListPanelDataResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *regionKey;
@property (nonatomic) long long panelID;
@property (copy, nonatomic) NSString *panelKey;
@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSString *iconUri;
@property (retain, nonatomic) NSArray *categoryModel;
@property (retain, nonatomic) AWEMediaTemplateDataListResponseModel *defaultDataList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryModelJSONTransformer;
+ (id)defaultDataListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
