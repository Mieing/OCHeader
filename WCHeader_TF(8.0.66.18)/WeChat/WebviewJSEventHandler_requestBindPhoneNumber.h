@class NSString, JSEvent, MMPageSheetAdapter;

@interface WebviewJSEventHandler_requestBindPhoneNumber : WebviewJSEventHandlerBase <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) MMPageSheetAdapter *adapter;
@property (retain, nonatomic) NSString *bindPhoneNum;
@property (retain, nonatomic) JSEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0 HandlerFacade:(id)a1 ExtraData:(id)a2;
- (void)showHalfScreen:(id)a0;
- (id)getRequestInfoView:(id)a0;
- (id)getPhoneInfoView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
