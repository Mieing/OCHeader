@class NSString;
@protocol MMDeleteNotRegularContactLogicDelegate;

@interface MMDeleteNotRegularContactLogic : MMObject <PBMessageObserverDelegate> {
    NSString *m_contactsMaxLimitSortSessionid;
    int m_responseRet;
}

@property (weak, nonatomic) id<MMDeleteNotRegularContactLogicDelegate> delegate;

- (BOOL)getNeedDeleteNotRegularContactFromNetwork:(id)a0;
- (void)OnGetNeedDeleteNotRegularContactResponse:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (BOOL)onShouldHandleContactVerifyPreCheckFail:(id)a0 opcode:(unsigned int)a1 responseRet:(int)a2;
- (void)onContactVerifyPreCheckFail:(id)a0 opcode:(unsigned int)a1;
- (void)onContactVerifyPreCheckFailActionDone:(id)a0 opcode:(unsigned int)a1;
- (void)onContactVerifyPreCheckFailActionCancel:(id)a0 opcode:(unsigned int)a1;
- (void).cxx_destruct;

@end
