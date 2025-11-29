@protocol AWEDoubleColumnSearchMerchandiseFilterManagerDelegate, AWEMerchandiseComponentCellDelegate;

@interface AWESearchCachalotResultStoreContext : AWESearchCachalotResultContext

@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) double userWindowLeftRightPadding;
@property (nonatomic) double userWindowTopPadding;
@property (weak, nonatomic) id<AWEMerchandiseComponentCellDelegate, AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
