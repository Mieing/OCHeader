@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, UILabel, UIStackView;

@interface AWEMerchandiseComponentPromotionalActivitiesCell : AWEMerchandiseComponentBaseCell

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *filterComponentModel;
@property (retain, nonatomic) UILabel *headTextLabel;
@property (retain, nonatomic) UILabel *tailTextLabel;
@property (retain, nonatomic) UIStackView *stackView;

+ (BOOL)isSelectWithModel:(id)a0 filterManager:(id)a1;
+ (double)widthWithComponentModel:(id)a0 filterManager:(id)a1;
+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1 text:(id)a2;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)configDisplayUIForDefaultStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectedStyleWithModel:(id)a0;
- (void)configDisplayUIForSelectingStyleWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
