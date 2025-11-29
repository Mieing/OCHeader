@class AWEDoubleColumnSearchMerchandiseFilterManager;
@protocol AWEDoubleColumnSearchMerchandiseFilterManagerDelegate, AWEMerchandiseComponentCellDelegate;

@interface AWESearchCachalotPhotoSearchContext : AWESearchCachalotResultContext

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (weak, nonatomic) id<AWEMerchandiseComponentCellDelegate, AWEDoubleColumnSearchMerchandiseFilterManagerDelegate> bizDelegate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
