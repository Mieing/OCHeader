@class NSString, NSArray, IESECWinMixFullItem, NSMutableArray, IESECWinExtensionCardItem;

@interface IESECWinTabResponse : IESECBaseApiModel

@property (nonatomic) long long bottomModuleType;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long selectTabType;
@property (copy, nonatomic) NSString *selectCategory;
@property (copy, nonatomic) NSString *selectSubCategory;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) IESECWinMixFullItem *topCards;
@property (retain, nonatomic) NSArray *globalMixFullCards;
@property (retain, nonatomic) NSArray *mixFullCards;
@property (retain, nonatomic) NSMutableArray *sortTypes;
@property (retain, nonatomic) NSMutableArray *filterTypes;
@property (retain, nonatomic) IESECWinExtensionCardItem *extensionCard;
@property (copy, nonatomic) NSString *commonPassThrough;
@property (retain, nonatomic) NSArray *categoryList;
@property (retain, nonatomic) NSArray *subCategoryList;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) long long goodsStickyArea;
@property (nonatomic) BOOL hideEmptyStatus;
@property (copy, nonatomic) NSString *categoryData;

+ (id)tabsJSONTransformer;
+ (id)sortTypesJSONTransformer;
+ (id)mixFullCardsJSONTransformer;
+ (id)categoryListJSONTransformer;
+ (id)filterTypesJSONTransformer;
+ (id)subCategoryListJSONTransformer;
+ (id)globalMixFullCardsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
