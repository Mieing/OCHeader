@class NSString, CContactVerifyLogic, MMDeleteNotRegularContactLogic;
@protocol ContactVerifyPreCheckBusinessLogicDelegate;

@interface CContactVerifyPreCheckBusinessLogic : MMObject <ContactVerifyPreCheckLogicDelegate, MMDeleteNotRegularContactLogicDelegate> {
    CContactVerifyLogic *m_oContactVerifyLogic;
    MMDeleteNotRegularContactLogic *m_deleteNotRegularContactLogic;
}

@property (weak, nonatomic) id<ContactVerifyPreCheckBusinessLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getContactVerifyLogic;
- (BOOL)sendVerifyUserPreCheck:(id)a0 opcode:(unsigned int)a1;
- (BOOL)onShouldHandleContactVerifyPreCheckFail:(id)a0 opcode:(unsigned int)a1 responseRet:(int)a2;
- (void)onContactVerifyPreCheckSuccess:(id)a0 opcode:(unsigned int)a1;
- (void)onContactVerifyPreCheckFail:(id)a0 opcode:(unsigned int)a1 responseRet:(int)a2;
- (void)onContactVerifyPreCheckFailActionDone:(id)a0 opcode:(unsigned int)a1 responseRet:(int)a2;
- (void)onContactVerifyPreCheckFailActionCancel:(id)a0 opcode:(unsigned int)a1 responseRet:(int)a2;
- (id)getViewController;
- (BOOL)checkIsDeleteNotRegularContactBusiness:(int)a0;
- (id)getDeleteNotRegularContactLogic;
- (void).cxx_destruct;

@end
