@class MMBaseSessionCellData, NSString, WCFinderContact;

@interface WCFinderMsgSessionNormalCellViewModel : WCFinderMsgSessionCellViewModel <WCFinderContactExt>

@property (retain, nonatomic) MMBaseSessionCellData *cellData;
@property (retain, nonatomic) NSString *realChatUserName;
@property (retain, nonatomic) WCFinderContact *realChatContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellDataForSessionInfo:(id)a0;

- (id)realChatFinderContact;
- (void)updateCellView;
- (void)updateCellData;
- (void)updateRealChatContact;
- (void)onFinderContactUpdate:(id)a0;
- (void).cxx_destruct;

@end
