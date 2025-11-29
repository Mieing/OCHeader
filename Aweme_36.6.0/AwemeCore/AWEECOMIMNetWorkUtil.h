@interface AWEECOMIMNetWorkUtil : NSObject

+ (BOOL)validateResponse:(id)a0;
+ (id)messageFromResponse:(id)a0;
+ (id)postURL:(id)a0 appendQuery:(id)a1;
+ (id)realEccsSchemeInfoWithEccsSchemeInfoApiString:(id)a0;
+ (void)monitorServiceWithURLPath:(id)a0 jsonObj:(id)a1 error:(id)a2;
+ (BOOL)isNetworkConnected;

@end
