@class UIButton;

@interface AWEVideoCoverEvaluateAiButtonsView : UIView

@property (retain, nonatomic) UIButton *appleButton;
@property (retain, nonatomic) UIButton *editButton;
@property (copy, nonatomic) id /* block */ applyBlock;
@property (copy, nonatomic) id /* block */ editBlock;

- (void)initSubViews;
- (void)applyButtonClick;
- (void)editButtonClick;
- (void)setApplyButtonEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
