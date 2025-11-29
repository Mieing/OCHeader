@class NSString, MMPageSheetAdapter, WCPayMainViewTipsPageSheetConfig, UIView, RichTextView;
@protocol WCPayMainViewTipsPageSheetDelegate;

@interface WCPayMainViewTipsPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayMainViewTipsPageSheetDelegate> delegate;
@property (retain, nonatomic) WCPayMainViewTipsPageSheetConfig *config;
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
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
