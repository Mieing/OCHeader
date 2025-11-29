@class UIImageView, UIButton, UIView;

@interface IESLiveEffectPreviewView : UIView

@property (retain, nonatomic) UIImageView *placeHolderView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (retain, nonatomic) UIView *renderView;

- (void)showImageUrls:(id)a0;
- (void)changeConfirmButtonTitle:(id)a0;
- (void)showRenderView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)confirmAction;

@end
