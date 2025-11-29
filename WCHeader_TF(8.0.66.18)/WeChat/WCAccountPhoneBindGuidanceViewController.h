@class NSString, WCAccountPhoneBindGuidanceData;
@protocol WCAccountPhoneBindGuidanceViewControllerDelegate;

@interface WCAccountPhoneBindGuidanceViewController : WCAccountBaseViewController <ILinkEventExt, MMWebViewDelegate>

@property (retain, nonatomic) WCAccountPhoneBindGuidanceData *m_guidanceData;
@property (weak, nonatomic) id<WCAccountPhoneBindGuidanceViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (BOOL)useBlackStyleView;
- (BOOL)useTableView;
- (void)initTableView;
- (void)onBind;
- (void)onClickClose;
- (void)onClickDoubleCheckOK;
- (void)onClickDoubleCheckCancel;
- (void)trueClose;
- (void)reportPageExpose;
- (void)reportAction:(int)a0;
- (void)reportWithString:(id)a0;
- (void)onWebViewCloseAndGoNext:(id)a0 webVC:(id)a1 customClose:(BOOL *)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
