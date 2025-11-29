@class NSString, MMPageSheetAdapter, UIView, WCPayTipsPageSheetConfig, RichTextView;
@protocol WCPayTipsPageSheetDelegate;

@interface WCPayTipsPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayTipsPageSheetDelegate> delegate;
@property (retain, nonatomic) WCPayTipsPageSheetConfig *config;
@property (nonatomic) BOOL bIsShowing;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (retain, nonatomic) RichTextView *richTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 delegate:(id)a1;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)a0;
- (BOOL)isTipsPageSheetShowing;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetWillAppear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)pageSheetWillDisappear:(id)a0;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetWillClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void)pageSheetDidClose:(id)a0 isManualTrigger:(BOOL)a1;
- (void).cxx_destruct;

@end
