@class AWENearbyC2CellTextData, AWEURLModel;

@interface AWENearbyC2CellTagData : AWEBaseApiModel

@property (retain, nonatomic) AWENearbyC2CellTextData *text;
@property (retain, nonatomic) AWEURLModel *headIcon;
@property (retain, nonatomic) AWENearbyC2CellTextData *clickText;
@property (retain, nonatomic) AWEURLModel *clickIcon;
@property (readonly, nonatomic) BOOL iconSizeConfigEnable;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconSize;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
