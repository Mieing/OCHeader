@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWEDoubleColumnSearchMerchandiseFilterManager, UILabel, YYAnimatedImageView;

@interface AWESearchMerchandiseComponentDropDownDefaultSelectExpandViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) YYAnimatedImageView *tailIcon;
@property (nonatomic) struct CGSize { double width; double height; } headIconSize;
@property (nonatomic) struct CGSize { double width; double height; } tailIconSize;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;

+ (id)textFontWithModel:(id)a0 filterManager:(id)a1;
+ (double)titleWidthWithModel:(id)a0 filterManager:(id)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1;
- (void)updateUIDisplayStatusWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
