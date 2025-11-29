@class UIImageView, UILabel, AWEDoubleColumnSearchMerchandiseFilterStyleModel;

@interface AWESearchMerchandiseFilterBaseItem : UIView

@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (nonatomic) BOOL isTwoLine;
@property (nonatomic) BOOL highLight;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseFilterStyleModel *styleModel;

- (void)setMainText:(id)a0 subText:(id)a1 icon:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateFont;

@end
