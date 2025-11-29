@class OpenMinimchGuide, NSString, UIView;
@protocol WCPayTransferOpenMiniGuidePageSheetDelegate;

@interface WCPayTransferOpenMiniGuidePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *tipsContainerView;
@property (retain, nonatomic) OpenMinimchGuide *viewData;
@property (weak, nonatomic) id<WCPayTransferOpenMiniGuidePageSheetDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTipsInfo:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)onClickLinkBtn:(id)a0;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)showWithAnimated:(BOOL)a0;
- (id)getOpenMiniGuideReportStr;
- (void).cxx_destruct;

@end
