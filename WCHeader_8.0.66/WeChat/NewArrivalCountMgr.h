@class NSString, NewArrivalCountData;

@interface NewArrivalCountMgr : MMUserService <MMServiceProtocol, IMsgExt> {
    NewArrivalCountData *m_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPath;
- (BOOL)loadData;
- (void)callSXExt;
- (void)callExt:(id)a0;
- (void)zeroSXNewArrivalMsgItem;
- (id)init;
- (unsigned int)getSXNewArrivalCount;
- (BOOL)zeroSXNewArrivalCount;
- (void)lastMessageChange:(id)a0 msgid:(unsigned int)a1 msg:(id)a2;
- (void)lastMessageChange:(id)a0 MsgWrap:(id)a1;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void)OnDelMsg:(id)a0;
- (void)OnModMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
