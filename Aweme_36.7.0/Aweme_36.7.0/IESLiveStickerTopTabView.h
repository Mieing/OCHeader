@class UIButton, UIView;

@interface IESLiveStickerTopTabView : UIView

@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIButton *textStickerBtn;
@property (retain, nonatomic) UIButton *imageStickerBtn;

- (void)applyAccessibility;
- (void)highlightSelectedButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (id)buttonWithTitle:(id)a0;

@end
