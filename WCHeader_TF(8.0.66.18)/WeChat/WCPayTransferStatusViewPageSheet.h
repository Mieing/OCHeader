@class NSString, TipsInfo, UIView;

@interface WCPayTransferStatusViewPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) TipsInfo *viewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTipsInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
