@class WCPayWebImageView, PopUpWithHalfDialog, MMPageSheetAdapter, NSString, UIView, RichTextView, MMUILabel;
@protocol WCPayLQTPageSheetDelegate;

@interface WCPayLQTPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayLQTPageSheetDelegate> delegate;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (retain, nonatomic) WCPayWebImageView *mainIconImgView;
@property (retain, nonatomic) MMUILabel *largeContentLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) PopUpWithHalfDialog *pageData;
@property (retain, nonatomic) NSString *mainContent;
@property (nonatomic) int clickBtnType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)updateDetailViewWithPopUpDialogData:(id)a0 popUpMainContent:(id)a1;
- (void)setupAdapter;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailView;
- (void)showPageSheet;
- (void)dismissPageSheet;
- (void)pushPageSheet:(id)a0;
- (void)popPageSheet;
- (id)getAdapter;
- (id)getPageViewId;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
