@protocol ChatMigrationGetConnectInfoDelegate;

@interface ChatMigrationGetConnectInfo : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<ChatMigrationGetConnectInfoDelegate> m_delegate;

- (id)init;
- (void)dealloc;
- (void)getConnectInfo:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
