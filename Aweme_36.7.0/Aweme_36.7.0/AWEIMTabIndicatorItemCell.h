@class AWEIMUnreadDotView, AWEIMTabIndicatorViewConfig, UIImageView, AWEIMTabIndicatorModel, UILabel;

@interface AWEIMTabIndicatorItemCell : UICollectionViewCell

@property (retain, nonatomic) AWEIMTabIndicatorModel *model;
@property (retain, nonatomic) AWEIMTabIndicatorViewConfig *config;
@property (nonatomic) BOOL isLayoutSetup;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *tailingImageView;
@property (retain, nonatomic) AWEIMUnreadDotView *dotView;

- (void)p_setupLayoutIfNeeded:(id)a0 config:(id)a1;
- (void)p_observeModel:(id)a0;
- (void)p_configUnreadView:(id)a0 config:(id)a1;
- (void)configDotViewStyleWithModel:(id)a0 config:(id)a1;
- (void)remakeDotViewWithModel:(id)a0 config:(id)a1;
- (void)configWithModel:(id)a0 config:(id)a1 targetPageView:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
