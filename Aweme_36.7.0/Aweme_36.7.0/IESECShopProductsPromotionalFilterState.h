@class NSArray, IESECStoreSelectButtonModel, IESECShopProductsHybridContext, NSDictionary, IESECShopProductSwitchButtonConfig;

@interface IESECShopProductsPromotionalFilterState : NSObject

@property (readonly, nonatomic) IESECShopProductsHybridContext *context;
@property (nonatomic) BOOL updateButtons;
@property (copy, nonatomic) NSArray *buttonModels;
@property (readonly, nonatomic) IESECStoreSelectButtonModel *selectedButton;
@property (copy, nonatomic) NSArray *remainButtonModels;
@property (copy, nonatomic) NSDictionary *switchButtons;
@property (readonly, nonatomic) IESECShopProductSwitchButtonConfig *selectedSwitchButton;
@property (nonatomic) BOOL hasFilterActivityButton;
@property (copy, nonatomic) NSArray *promotionButtonModels;

- (void)updateSwitchButtonSelectedState:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (BOOL)hasButtons;

@end
