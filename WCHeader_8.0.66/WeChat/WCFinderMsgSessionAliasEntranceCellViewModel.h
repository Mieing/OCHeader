@class MMBaseSessionCellData, NSString, WCFinderContact;

@interface WCFinderMsgSessionAliasEntranceCellViewModel : WCFinderMsgSessionCellViewModel <WCFinderMsgSessionMgrExt, WCFinderContactExt>

@property (retain, nonatomic) MMBaseSessionCellData *cellData;
@property (retain, nonatomic) NSString *senderUserName;
@property (retain, nonatomic) WCFinderContact *realChatContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)headImage;
- (id)sessionTitle;
- (void)updateCellView;
- (void)updateCellData;
- (void)updateCellViewDataWithSesionInfo:(id)a0;
- (void)onFinderContactUpdate:(id)a0;
- (void).cxx_destruct;

@end
