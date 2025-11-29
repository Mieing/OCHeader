@class CContact, MMPageSheetAdapter, NSString, UIView, WCPayGPLaunchChatroomProfilePageSheet;
@protocol WCPayGPLaunchConfirmPageSheetDelegate;

@interface WCPayGPLaunchConfirmPageSheet : NSObject <MMPageSheetBottomViewDelegate, WCPayGPLaunchChatroomProfilePageSheetDelegate, MMPageSheetAdapterDelegate>

@property (weak, nonatomic) id<WCPayGPLaunchConfirmPageSheetDelegate> delegate;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (nonatomic) BOOL bIsShowing;
@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) NSString *theme;
@property (retain, nonatomic) NSString *displayNameContent;
@property (retain, nonatomic) WCPayGPLaunchChatroomProfilePageSheet *profilePageSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelagte:(id)a0 contact:(id)a1 theme:(id)a2;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (double)setupContactCellContent;
- (double)setupThemeContentWithContentHeight:(double)a0;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)a0;
- (void)viewChatroomProfile;
- (void)onChatroomProfilePageSheetDidClose;
- (BOOL)isPageSheetShowing;
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
