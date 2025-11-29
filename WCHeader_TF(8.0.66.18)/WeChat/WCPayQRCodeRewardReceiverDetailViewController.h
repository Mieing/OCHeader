@class WCPayQRCodeRewardCodeView, NSString, WCPayNoticeItemView;
@protocol WCPayQRCodeRewardReceiverDetailViewControllerDelegate;

@interface WCPayQRCodeRewardReceiverDetailViewController : WCPayBaseViewController <WCPayQRCodeRewardCodeViewDelegate, WCActionSheetDelegate>

@property (weak, nonatomic) id<WCPayQRCodeRewardReceiverDetailViewControllerDelegate> delegate;
@property (retain, nonatomic) WCPayQRCodeRewardCodeView *codeView;
@property (retain, nonatomic) WCPayNoticeItemView *noticeItemView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)refreshViewWithData:(id)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidLoad;
- (void)refreshNavigationBar;
- (void)setupIntrolView;
- (void)setupDetailViewContent;
- (void)setupFooterView;
- (id)getDetailView;
- (void)leftBarButtonClick;
- (void)settingBtnClick;
- (void)confirmSetupBtnClick;
- (void)saveCodeBtnClick;
- (id)getImageFromCodeView;
- (void)detailBtnClick;
- (void)updateViewAfterGetSetWordingResult:(BOOL)a0;
- (void)updateViewAfterGetRemoveWordingResult:(BOOL)a0;
- (void)onRewardCodeViewClickBoxButtonWithCodeDisplayMode:(long long)a0;
- (void)onRewardCodeViewConfirmToSetWording:(id)a0;
- (void)onRewardCodeViewConfirmToRemoveWording;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)userDidTakeScreenshot:(id)a0;
- (void).cxx_destruct;

@end
