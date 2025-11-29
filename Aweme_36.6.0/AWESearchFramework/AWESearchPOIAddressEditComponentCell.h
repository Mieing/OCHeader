@class AWEDoubleColumnSearchMerchandiseFilterComponentModel;

@interface AWESearchPOIAddressEditComponentCell : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *componentModel;

+ (double)widthWithComponentModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
