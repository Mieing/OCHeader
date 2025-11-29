@interface RPSecurity : NSObject

+ (id)RP_DESEnc:(id)a0 key:(id)a1 iv:(id)a2 type:(id)a3;
+ (id)RP_DESDec:(id)a0 key:(id)a1 iv:(id)a2 type:(id)a3;
+ (id)RP_getK_ENC:(id)a0;
+ (id)RP_getK_MAC:(id)a0;
+ (id)RP_3DESDecrypt:(id)a0 key:(id)a1;
+ (id)RP_3DESEncrypt:(id)a0 key:(id)a1;
+ (int)DM_AscToHex:(char *)a0 pSrc:(char *)a1 nSrcLen:(int)a2;
+ (id)RPSha1WithHexStr:(id)a0;
+ (id)DESParity:(id)a0;
+ (id)numToHex:(long long)a0;
+ (id)RP_DESEncrypt:(id)a0 key:(id)a1 iv:(id)a2 type:(id)a3;
+ (id)RP_DESDecrypt:(id)a0 key:(id)a1 iv:(id)a2 type:(id)a3;

@end
