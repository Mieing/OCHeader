@class NSString, UIView;

@interface FaceRecogTipsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *tipsContainerView;
@property (copy, nonatomic) id /* block */ onDismiss;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDismiss:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (id)genImageViewWithName:(id)a0;
- (id)genTipsLabelWithTitle:(id)a0;
- (long long)overrideUserInterfaceStyle;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void).cxx_destruct;

@end
