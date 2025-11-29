@class NSString;
@protocol NormalContactVerifyLogicDelegate;

@interface NormalContactVerifyLogic : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<NormalContactVerifyLogicDelegate> delegate;
@property (nonatomic) unsigned int m_qrAddScene;
@property (retain, nonatomic) NSString *m_reportInfo;
@property (nonatomic) unsigned int m_uiNeedConfirm;

- (id)init;
- (void)dealloc;
- (BOOL)startVerifyContact:(id)a0 opcode:(unsigned int)a1 verifyMsg:(id)a2;
- (BOOL)doubleCheckContactAntispamTickets:(id)a0 withRequest:(id)a1;
- (BOOL)sendVerifyUserRequest:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)HandleGetContact:(id)a0;
- (void)HandleVerifyUser:(id)a0;
- (BOOL)sendVerifyUserPreCheck:(id)a0 opcode:(unsigned int)a1;
- (void)OnSendVerifyUserPreCheck:(id)a0;
- (void).cxx_destruct;

@end
