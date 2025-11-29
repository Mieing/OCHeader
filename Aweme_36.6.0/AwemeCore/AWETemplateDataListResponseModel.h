@class NSArray, NSDictionary, NSString;

@interface AWETemplateDataListResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cursor;
@property (retain, nonatomic) NSArray *categoryModel;
@property (retain, nonatomic) NSArray *templateInfo;
@property (nonatomic) BOOL hasNext;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryModelJSONTransformer;
+ (id)templateInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
