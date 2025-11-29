@interface TSMCryptoSM2Desc : NSObject

+ (id)encrypt:(int)a0 desc:(id)a1 plain:(id)a2 error:(id *)a3;
+ (id)decrypt:(int)a0 desc:(id)a1 cipher:(id)a2 error:(id *)a3;
+ (id)sign:(int)a0 desc:(id)a1 msg:(id)a2 uid:(id)a3 error:(id *)a4;
+ (BOOL)verify:(int)a0 desc:(id)a1 msg:(id)a2 uid:(id)a3 sig:(id)a4 error:(id *)a5;

@end
