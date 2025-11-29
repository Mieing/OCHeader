@class NSString, BypSendPCRemindSheetView, BypSendPCRemindMessageModel;
@protocol BypSendPCRemindMessageProtocol;

@interface BypSendPCRemindMessageMgr : NSObject <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) BypSendPCRemindSheetView *sheetView;
@property (weak, nonatomic) id<BypSendPCRemindMessageProtocol> delegate;
@property (retain, nonatomic) BypSendPCRemindMessageModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)sendMsgEvent:(id)a0 alertInController:(id)a1;
- (void)showSheetAlert:(id)a0 title:(id)a1 iconUrl:(id)a2 desc:(id)a3;
- (void)sendRequest:(id)a0 domain:(id)a1 sendTime:(id)a2;
- (void)onSuccess;
- (void)onFailed:(int)a0 errMsg:(id)a1;
- (void)showSuccessToast;
- (void)showFailedToast;
- (id)getDesc:(id)a0;
- (id)getDescOnPc:(id)a0;
- (id)getDescNeedLogin:(id)a0;
- (id)getToastDesc:(id)a0;
- (BOOL)isPCLoggedin;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void).cxx_destruct;

@end
