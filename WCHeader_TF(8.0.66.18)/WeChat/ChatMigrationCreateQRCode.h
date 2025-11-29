@protocol ChatMigrationCreateQRCodeDelegate;

@interface ChatMigrationCreateQRCode : MMObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<ChatMigrationCreateQRCodeDelegate> m_delegate;

- (id)init;
- (void)dealloc;
- (void)getQRCodeWithIP:(id)a0 Port:(unsigned short)a1 WifiName:(id)a2 PcName:(id)a3 PcacctName:(id)a4 TotalSize:(unsigned long long)a5;
- (void)getQRCodeOfflineWithIP:(id)a0 Port:(unsigned short)a1 WifiName:(id)a2 PcName:(id)a3 PcacctName:(id)a4 TotalSize:(unsigned long long)a5 Ticket:(id)a6 AESKey:(id)a7 Uin:(unsigned int)a8;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
