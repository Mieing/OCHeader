@interface ChatMigrationPureOfflineQrcode : NSObject

+ (void)getInfoByUrl:(id)a0 completion:(id /* block */)a1;
+ (void)getQrcodeWithIP:(id)a0 Port:(unsigned short)a1 WifiName:(id)a2 PcName:(id)a3 TotalSize:(unsigned long long)a4 completion:(id /* block */)a5;
+ (void)checkQrcodeBind:(id)a0 completion:(id /* block */)a1;
+ (id)genIdByHello:(id)a0 withOk:(id)a1;

@end
