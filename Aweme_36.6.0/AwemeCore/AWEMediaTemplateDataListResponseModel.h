@class NSArray, NSString;

@interface AWEMediaTemplateDataListResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *categoryModel;
@property (retain, nonatomic) NSArray *templateInfo;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSArray *filteredTemplate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryModelJSONTransformer;
+ (id)templateInfoJSONTransformer;
+ (id)filteredTemplateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
