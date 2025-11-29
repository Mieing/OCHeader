@interface CSJNetworkSecurity : NSObject

@property (class, readonly, nonatomic) BOOL needEncrypt;

+ (id)encryptRequestModel:(id)a0 adslot:(id)a1;
+ (id)decryptRequestModel:(id)a0 error:(id *)a1;
+ (id)encryptRequestDictionary:(id)a0;
+ (id)encryptRequestDictionaryWithOutSign:(id)a0;
+ (id)encryptJSONObject:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)decryptAdMarkUp:(id)a0 error:(id *)a1;
+ (id)encryptString:(id)a0 key:(id)a1 iv:(id)a2;
+ (long long)pbu_checkNetworkResultWithCypher:(long long)a0 message:(id)a1 resultProxy:(id *)a2;
+ (void)pbu_errorCode:(long long)a0 error:(id *)a1;
+ (id)encryptData:(id)a0 key:(id)a1 iv:(id)a2;
+ (id)encryptRequestArray:(id)a0;
+ (id)decryptSettingModel:(id)a0 error:(id *)a1;
+ (id)encryptString:(id)a0;

@end
