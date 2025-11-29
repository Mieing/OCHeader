@class AWEDoubleColumnSearchMerchandiseFilterComponentModel, AWEDoubleColumnSearchMerchandiseFilterManager, UILabel, YYAnimatedImageView;

@interface AWESearchMerchandiseComponentDropDownExpandViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) YYAnimatedImageView *headIcon;
@property (retain, nonatomic) YYAnimatedImageView *tailIcon;
@property (nonatomic) struct CGSize { double width; double height; } headIconSize;
@property (nonatomic) struct CGSize { double width; double height; } tailIconSize;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterComponentModel *model;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterManager *filterManager;
@property (nonatomic) BOOL isSelect;

+ (double)titleWidthWithModel:(id)a0 isSelect:(BOOL)a1;
+ (id)textFontWithModel:(id)a0 isSelect:(BOOL)a1;
+ (id)identifier;

- (void)configWithComponentModel:(id)a0 filterManager:(id)a1 isSelect:(BOOL)a2;
- (void)updateUIDisplayStatusWithModel:(id)a0 isSelect:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
