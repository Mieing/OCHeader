@interface AMapFoundationUtility : NSObject

+ (id)encryptForXinfo2:(id)a0;
+ (id)encodeURLParamDictionary:(id)a0;
+ (id)joinedStringWithDictionary:(id)a0 separator:(id)a1;
+ (id)restSignatureWithParams:(id)a0;
+ (BOOL)appendData:(id)a0 toMutableData:(id)a1 shouldAddZeroLength:(BOOL)a2;
+ (id)encryptForSourceData:(id)a0;
+ (id)urlEncodeForKey:(id)a0;
+ (id)assembledURLStringWithAddress:(id)a0 enableHTTPS:(BOOL)a1;
+ (id)restURLWithPath:(id)a0 component:(id)a1;
+ (id)v6RestURLWithPath:(id)a0 component:(id)a1;
+ (BOOL)boolValueWithAuthResponse:(id)a0 forKey:(id)a1;
+ (id)decryptAESForSourceData:(id)a0;
+ (id)encryptAESForSourceData:(id)a0;
+ (BOOL)writeFileWithData:(id)a0 fileName:(id)a1;
+ (BOOL)boolValueWithAuthResponse:(id)a0;
+ (id)encryptForXinfo30:(id)a0;
+ (id)encryptForXinfo21:(id)a0;
+ (id)restSignatureWithParams:(id)a0 bundleID:(id)a1;
+ (id)createTimestampString;
+ (id)createSCodeStringWithParams:(id)a0 timestamp:(id)a1 bundleID:(id)a2;
+ (id)headersForKeyVerificationWithParams:(id)a0 bundleID:(id)a1;
+ (id)sortedStringWithParams:(id)a0;
+ (id)assembledURLStringWithAddress:(id)a0 enableHTTPS:(BOOL)a1 keepHTTPS:(BOOL)a2;
+ (id)encryptForXinfo:(id)a0;
+ (id)urlDecodeForKey:(id)a0;
+ (id)filteredParamString:(id)a0;
+ (id)encodeURLParamString:(id)a0;
+ (id)headersForKeyVerificationWithParams:(id)a0;
+ (id)ipV6URLStringWithAddress:(id)a0;

@end
