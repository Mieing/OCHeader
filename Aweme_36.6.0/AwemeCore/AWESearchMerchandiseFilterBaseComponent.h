@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWEDoubleColumnSearchMerchandiseFilterManager;

@interface AWESearchMerchandiseFilterBaseComponent : UICollectionViewCell

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (nonatomic) BOOL isSelected;
@property (weak, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *manager;

- (id)businessInfo;
- (void).cxx_destruct;

@end
