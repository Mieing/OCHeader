@class MMUIButton;

@interface WCMomentsShareScopeBottomView : UIView

@property (retain, nonatomic) MMUIButton *modifyButton;
@property (copy, nonatomic) id /* block */ modifyShareScopeBlock;

+ (double)heightForShareScopeBottomViewWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)initModifyButton;
- (void)layoutSubviews;
- (void)onClickModifyShareScopeButton;
- (void).cxx_destruct;

@end
