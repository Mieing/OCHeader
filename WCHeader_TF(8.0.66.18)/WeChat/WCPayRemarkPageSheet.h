@class UIButton, NSString, WCPayRemarkPageSheetConfig, MMPageSheetAdapter, UIView, MMGrowTextView, MMUILabel;
@protocol WCPayRemarkPageSheetDelegate;

@interface WCPayRemarkPageSheet : NSObject <MMGrowTextViewDelegate, MMPageSheetBottomViewDelegate, IMMGrowTextViewExt, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayRemarkPageSheetDelegate> delegate;
@property (retain, nonatomic) WCPayRemarkPageSheetConfig *config;
@property (nonatomic) BOOL bIsShowing;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (retain, nonatomic) UIView *textbackgroundView;
@property (retain, nonatomic) MMGrowTextView *textView;
@property (retain, nonatomic) MMUILabel *inputCountLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 delegate:(id)a1;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)updatetextViewHeight;
- (double)updateViewStatus;
- (void)updateConfig:(id)a0;
- (void)showPageSheet;
- (void)dismissPageSheet;
- (void)rightButtonClick;
- (id)getCurrntContent;
- (BOOL)isRemarkPageSheetShowing;
- (void)dismissPage;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)TextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)TextViewHeightDidChanged:(id)a0;
- (void)onTextView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillDisappear:(id)a0;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
