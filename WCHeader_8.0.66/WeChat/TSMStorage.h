@interface TSMStorage : NSObject

+ (BOOL)initWithPath:(id)a0 appid:(id)a1 userid:(id)a2 error:(id *)a3;
+ (BOOL)generateSM4Key:(id)a0 error:(id *)a1;
+ (BOOL)importSM4Key:(id)a0 key:(id)a1 error:(id *)a2;
+ (id)exportSM4Key:(id)a0 error:(id *)a1;
+ (BOOL)updateSM4Key:(id)a0 key:(id)a1 error:(id *)a2;
+ (BOOL)deleteSM4Key:(id)a0 error:(id *)a1;
+ (BOOL)checkSM4Key:(id)a0 error:(id *)a1;
+ (BOOL)generateSM2KeyPair:(id)a0 error:(id *)a1;
+ (BOOL)importSM2PubKey:(id)a0 pubkey:(id)a1 format:(int)a2 error:(id *)a3;
+ (id)exportSM2PubKey:(id)a0 format:(int)a1 error:(id *)a2;
+ (BOOL)updateSM2PubKey:(id)a0 pubkey:(id)a1 format:(int)a2 error:(id *)a3;
+ (BOOL)deleteSM2PubKey:(id)a0 error:(id *)a1;
+ (BOOL)checkSM2PubKey:(id)a0 error:(id *)a1;
+ (BOOL)importSM2PriKey:(id)a0 prikey:(id)a1 format:(int)a2 error:(id *)a3;
+ (id)exportSM2PriKey:(id)a0 format:(int)a1 error:(id *)a2;
+ (BOOL)updateSM2PriKey:(id)a0 prikey:(id)a1 format:(int)a2 error:(id *)a3;
+ (BOOL)deleteSM2PriKey:(id)a0 error:(id *)a1;
+ (BOOL)checkSM2PriKey:(id)a0 error:(id *)a1;

@end
