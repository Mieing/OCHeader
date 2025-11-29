@class NSArray, IESECShopGoodsPickTypeModel, NSString, NSDictionary, IESECShopProductsPromotionalFilterState;

@interface IESECShopProductsFilterCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *sorts;
@property (nonatomic) long long sortOrder;
@property (copy, nonatomic) NSArray *activityFilterButtons;
@property (weak, nonatomic) IESECShopProductsPromotionalFilterState *promotionalFilterState;
@property (copy, nonatomic) NSArray *promotionFilterModel;
@property (nonatomic) BOOL bigSaleMoveToTop;
@property (retain, nonatomic) IESECShopGoodsPickTypeModel *pickModel;
@property (nonatomic) BOOL showSelectPanelButton;
@property (copy, nonatomic) NSString *selectPanelSchema;
@property (nonatomic) BOOL hasFilter;
@property (copy, nonatomic) NSDictionary *switchButtonConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promotionFilterModelJSONTransformer;
+ (id)sortsJSONTransformer;
+ (id)activityFilterButtonsJSONTransformer;
+ (id)switchButtonConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
