@class AWEDoubleColumnSearchMerchandiseFilterComponentModel;

@interface AWESearchFilterComponetDropDownMultCol : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *componentModel;

+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (double)widthWithComponentModel:(id)a0 filterManager:(id)a1;
+ (id)displayTextWithComponentModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
