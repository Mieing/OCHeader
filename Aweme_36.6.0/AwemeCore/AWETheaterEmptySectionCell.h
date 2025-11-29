@class UIView, AWETheaterPageContext, AWETheaterSectionModel;

@interface AWETheaterEmptySectionCell : UICollectionViewCell

@property (retain, nonatomic) AWETheaterPageContext *context;
@property (retain, nonatomic) AWETheaterSectionModel *model;
@property (retain, nonatomic) UIView *containerView;

- (void)configWithContext:(id)a0 model:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
