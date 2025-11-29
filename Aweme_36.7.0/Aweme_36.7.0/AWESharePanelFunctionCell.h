@class UILabel, UIImageView, AWESharePanelFunctionCellViewModel;

@interface AWESharePanelFunctionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (nonatomic) BOOL isEnable;
@property (retain, nonatomic) AWESharePanelFunctionCellViewModel *currentModel;
@property (retain, nonatomic) UIImageView *extImageView;

- (void)awe_themeDidChange:(long long)a0;
- (void)updateImageViewWithViewModel:(id)a0;
- (void)updateWithViewModel:(id)a0 bigFontAdapter:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
