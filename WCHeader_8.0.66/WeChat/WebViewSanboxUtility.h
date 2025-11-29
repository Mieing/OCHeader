@interface WebViewSanboxUtility : NSObject

+ (id)convertWebComptPb2WebComptInfo:(id)a0;
+ (id)randomSanboxId;
+ (id)hexadecimalStringFromData:(id)a0;
+ (id)sucureRamdomHexStringInBytesLength:(unsigned int)a0;
+ (id)sha1:(id)a0;
+ (id)dictQueryForURL:(id)a0;
+ (id)dictFragmentForURL:(id)a0;
+ (id)newUrlStringFrom:(id)a0 replaceHost:(id)a1;
+ (id)replaceFirstPlaceHolder:(id)a0 value:(id)a1 FromString:(id)a2;

@end
