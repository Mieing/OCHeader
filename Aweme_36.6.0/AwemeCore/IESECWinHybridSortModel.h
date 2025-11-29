@class NSArray, NSDictionary, NSString, IESECWinGoodsSortModel;

@interface IESECWinHybridSortModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sortTypes;
@property (copy, nonatomic) NSDictionary *layoutStyles;
@property (copy, nonatomic) NSArray *subCategoryList;
@property (copy, nonatomic) NSArray *childCategoryList;
@property (copy, nonatomic) NSArray *filterTypes;
@property (retain, nonatomic) IESECWinGoodsSortModel *selectedSortItem;
@property (nonatomic) long long currentSort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sortTypesJSONTransformer;
+ (id)childCategoryListJSONTransformer;
+ (id)filterTypesJSONTransformer;
+ (id)layoutStylesJSONTransformer;
+ (id)subCategoryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
