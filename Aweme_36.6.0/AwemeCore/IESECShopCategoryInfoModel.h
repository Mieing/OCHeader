@class NSArray, NSDictionary, NSString;

@interface IESECShopCategoryInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *subCategoryList;
@property (copy, nonatomic) NSDictionary *mainCategoryItem;
@property (copy, nonatomic) NSString *anchorSubCategoryId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
