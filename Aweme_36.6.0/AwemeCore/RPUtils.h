@interface RPUtils : NSObject

+ (id)RP_unPadding:(id)a0;
+ (id)RP_Sha1:(id)a0;
+ (id)RP_XOR:(id)a0 and:(id)a1;
+ (id)RP_getRandomHex:(int)a0;
+ (id)RP_doPadding:(id)a0;
+ (id)getDGKey:(id)a0;
+ (id)RP_numToHex:(long long)a0;
+ (id)RP_toAsn1Length:(unsigned long long)a0;
+ (id)DataTOjsonString:(id)a0;
+ (id)convert2JSONWithDictionary:(id)a0;
+ (id)dictionaryWithJsonString:(id)a0;

@end
