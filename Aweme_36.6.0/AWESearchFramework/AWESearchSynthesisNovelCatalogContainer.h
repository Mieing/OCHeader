@class UIButton, AWESearchSynthesisNovelCatalogView, UIView;

@interface AWESearchSynthesisNovelCatalogContainer : UIView {
    UIView *_contentView;
}

@property (retain, nonatomic) UIButton *bgView;
@property (retain, nonatomic) AWESearchSynthesisNovelCatalogView *catalogView;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)onPanGes:(id)a0;
- (void)bgViewClick;
- (void)showInView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
