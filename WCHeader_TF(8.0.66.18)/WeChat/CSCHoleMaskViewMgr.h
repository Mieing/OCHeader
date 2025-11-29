@class UIButton;

@interface CSCHoleMaskViewMgr : NSObject

@property (retain, nonatomic) UIButton *leftMaskView;
@property (retain, nonatomic) UIButton *topMaskView;
@property (retain, nonatomic) UIButton *rightMaskView;
@property (retain, nonatomic) UIButton *bottomMaskView;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)initWithSuperview:(id)a0 andHoleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andClickBlock:(id /* block */)a2;
- (void)setMaskViewHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setupMaskViewsWithSuperview:(id)a0 andHoleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onClickMaskView;
- (void)dealloc;
- (void).cxx_destruct;

@end
