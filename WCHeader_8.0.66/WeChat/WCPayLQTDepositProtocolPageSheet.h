@class NSString, UIView, MMPageSheetAdapter;
@protocol WCPayLQTDepositProtocolPageSheetDelegate;

@interface WCPayLQTDepositProtocolPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt>

@property (weak, nonatomic) id<WCPayLQTDepositProtocolPageSheetDelegate> delegate;
@property (retain, nonatomic) NSString *protocolContent;
@property (retain, nonatomic) NSString *protocolUrl;
@property (retain, nonatomic) MMPageSheetAdapter *pageAdapter;
@property (retain, nonatomic) UIView *pageSheetDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 protocolContent:(id)a1 protocolUrl:(id)a2;
- (BOOL)shouldSetupDetailViewContent;
- (void)setupDetailViewContent;
- (void)showPageSheet;
- (void)dismissPageSheet:(BOOL)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
