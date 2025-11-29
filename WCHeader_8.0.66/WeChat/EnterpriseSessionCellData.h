@interface EnterpriseSessionCellData : MMBaseSessionCellData

@property (nonatomic) BOOL isSessionTop;

- (void)updateWithBaseSessionInfo:(id)a0;
- (void)updateUnreadCount;
- (void)updateNameLabelText:(id)a0;
- (void)updateMsgLabelTextForEnterpriseMsg:(id)a0;
- (void)updateHeadViewInfo:(id)a0;
- (void)updateSessionTop;
- (id)textForMsgLabelWithMessage:(id)a0;

@end
