@class NSString, UIImageView;

@interface MassSendContentLogicController : BaseMsgContentLogicController <MultiSelectContactsViewControllerDelegate, IUiUtilExt> {
    UIImageView *_toolView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)GetMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (id)GetDownMsg:(id)a0 FromID:(unsigned int)a1 Limit:(int)a2 LeftCount:(unsigned int *)a3;
- (void)ClearUnRead:(id)a0 FromID:(unsigned int)a1 ToID:(unsigned int)a2;
- (void)DelMsg:(id)a0 MsgList:(id)a1 DelAll:(BOOL)a2;
- (void)AddMsg:(id)a0 MsgWrap:(id)a1;
- (void)ResendMsg:(id)a0 MsgWrap:(id)a1;
- (void)UnRegister;
- (void)Register;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (void)OpenDetailInfo;
- (void)initToolView;
- (void)handleToolView;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)StopPlaying;
- (void)onNewMassSend:(id)a0;
- (void)ViewWillInit;
- (void)ViewDidInit;
- (void)onMassSendSendAgain:(id)a0;
- (void)onPopFromNavigationController;
- (void)onTopBarFrameChanged;
- (void)deleteAllMsgByContact:(id)a0;
- (void)onDeleteMsg:(id)a0;
- (void)onMultiSelectContactReturn:(id)a0;
- (void).cxx_destruct;

@end
