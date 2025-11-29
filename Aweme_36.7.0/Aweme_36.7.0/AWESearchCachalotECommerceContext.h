@class AWEDoubleColumnSearchMerchandiseFilterManager;
@protocol AWESearchECardTracker, AWESearchMerchandiseUserWindowCellDelegate, AWEMerchandiseComponentCellDelegate, AWESearchMerchandiseTextTagCellDelegate, AWESearchECommerceGuideSearchStyleDelegate, AWESearchECommerceEnvironmentBKGDelegate, AWEDoubleColumnSearchMerchandiseFilterManagerDelegate, AWESearchWordProtocol;

@interface AWESearchCachalotECommerceContext : AWESearchCachalotResultContext

@property (nonatomic) BOOL isFromECommerce;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (retain, nonatomic) id<AWESearchECardTracker> eCardTracker;
@property (weak, nonatomic) id<AWESearchWordProtocol, AWESearchMerchandiseTextTagCellDelegate, AWESearchMerchandiseUserWindowCellDelegate, AWESearchECommerceGuideSearchStyleDelegate, AWESearchECommerceEnvironmentBKGDelegate, AWEMerchandiseComponentCellDelegate, AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
