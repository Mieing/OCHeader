@class MMUILabel, NSMutableDictionary, UIImageView, UIButton;
@protocol MMEdgeTipsViewDelegate;

@interface MMEdgeTipsView : MMUIView

@property (retain, nonatomic) UIButton *bgButton;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (weak, nonatomic) id<MMEdgeTipsViewDelegate> delegate;
@property (readonly, nonatomic) int position;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;

- (id)initWithTitle:(id)a0 image:(id)a1;
- (id)initWithConfig:(struct MMEdgeTipsViewConfig { id x0; id x1; id x2; int x3; })a0;
- (void)updateTitle:(id)a0;
- (void)initButtonWithConfig:(struct MMEdgeTipsViewConfig { id x0; id x1; id x2; int x3; } *)a0;
- (void)initIconWithConfig:(struct MMEdgeTipsViewConfig { id x0; id x1; id x2; int x3; } *)a0;
- (void)initTipsLabelWithConfig:(struct MMEdgeTipsViewConfig { id x0; id x1; id x2; int x3; } *)a0;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)showAnimate:(BOOL)a0 parentView:(id)a1 finishBlock:(id /* block */)a2;
- (void)hideAnimate:(BOOL)a0 parentView:(id)a1 finishBlock:(id /* block */)a2;
- (void)onClickBtn;
- (void)setContentHighlighted;
- (void)setContentNormal;
- (void).cxx_destruct;

@end
