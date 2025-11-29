@class NSString, TXNewsYuanBaoPlugin;

@interface TXNewsContentLogicController : BaseMsgContentLogicController <TXNewsYuanBaoPluginDelegate> {
    BOOL m_bNeedIntroView;
}

@property (retain, nonatomic) TXNewsYuanBaoPlugin *yuanbaoPlugin;
@property (copy, nonatomic) NSString *sessionId;
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
- (void)initSessionId;
- (void)OpenDetailInfo;
- (void)reloadIntroView;
- (void)initIntroView;
- (BOOL)CanReportShowInfo;
- (void)CustomToolViewEX:(id)a0 inputPresenter:(id)a1;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(BOOL *)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)ViewWillInit;
- (void)ViewDidInit;
- (BOOL)isNeedCached;
- (void)deleteAllMsgByContact:(id)a0;
- (void)onEnterRoom;
- (BOOL)mainSwitch_shouldHandleAppmsg;
- (void)reportYuanBaoPluginExpose;
- (void)reportYuanBaoPluginClick;
- (id)yuanbaoReportString;
- (void).cxx_destruct;

@end
