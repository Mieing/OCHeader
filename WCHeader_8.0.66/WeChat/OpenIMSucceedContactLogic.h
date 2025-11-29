@class NSString, NSMutableDictionary, CMessageWrap, OpenIMContactVerifyLogic, CBaseContact, MMTipsViewController;
@protocol OpenIMSucceedContactLogicLogicDelegate;

@interface OpenIMSucceedContactLogic : MMObject <MMTipsViewControllerDelegate, OpenIMContactVerifyLogicDelegate, PBMessageObserverDelegate, IMsgExt> {
    CMessageWrap *m_succeedContactMessageWrap;
    NSMutableDictionary *m_allSucceedContactDic;
    OpenIMContactVerifyLogic *m_openIMVerifyLogic;
    MMTipsViewController *m_succeedContactTipsView;
    CBaseContact *m_contact;
    NSString *_reportSessionId;
}

@property (weak, nonatomic) id<OpenIMSucceedContactLogicLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startSucceedContactOnce:(id)a0 contact:(id)a1;
- (void)startSucceedContact:(id)a0 contact:(id)a1;
- (void)p_startSucceedContact:(id)a0 contact:(id)a1;
- (id)getSucceedContactInfoDic;
- (id)getSucceedContactInfoDicWithUsrName:(id)a0 andMessageWrap:(id)a1;
- (void)showSucceedContactWindow;
- (void)touchImageButton:(id)a0;
- (id)parseSucceedContactXMLContent:(id)a0;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1;
- (void)startNotSucceedContact:(id)a0 contact:(id)a1;
- (void)showNotSucceedContactAlertView;
- (BOOL)isNewSucceedContact;
- (BOOL)isNewSucceedContactWithUsrName:(id)a0 andMessageWrap:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)NotAutoSucceedNetWorkWithAction:(int)a0;
- (void)OnNotAutoSucceedResponse:(id)a0;
- (id)getReportSessionId;
- (int)getReportUserStatus;
- (int)getReportSucceedStatus;
- (void)reportOpenIMReportWatchMessageRecordFromContact:(id)a0 toContact:(id)a1;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)a0 andUsrName:(id)a1 andMessageWrap:(id)a2;
- (void)reportOpenIMNewSucceedWithActionCode:(unsigned int)a0;
- (void)onOpenIMContactVerifyDone:(id)a0;
- (void)onOpenIMContactVerifyFail:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
