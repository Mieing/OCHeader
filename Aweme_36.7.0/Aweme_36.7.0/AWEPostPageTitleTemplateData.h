@class NSString, NSMutableArray;

@interface AWEPostPageTitleTemplateData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)defaultData;
+ (id)defaultDataList;
+ (id)recommendDataMap;
+ (id)defaultDataJsonList;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithCategoryModel:(id)a0;
- (void).cxx_destruct;

@end
