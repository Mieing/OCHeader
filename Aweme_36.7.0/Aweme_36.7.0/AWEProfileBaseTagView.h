@class AWECodeGenIdentityLabelModel, UIView;

@interface AWEProfileBaseTagView : UIButton

@property (retain, nonatomic) AWECodeGenIdentityLabelModel *model;
@property (retain, nonatomic) UIView *accessView;
@property (copy, nonatomic) id /* block */ tagClickBlock;
@property (nonatomic) long long isMore;

- (void)refreshColorAndImage;
- (void)onClickTagButton:(id)a0;
- (void)addAccessView;
- (id)defaultBtnImage;
- (id)scaleToSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
