@interface HMDTTNetHelper : NSObject

+ (id)getCookiesForRequest:(id)a0;
+ (unsigned long long)getHeadersLength:(id)a0;
+ (BOOL)isTTNetChromium;
+ (unsigned long long)getRequestLengthForRequest:(id)a0;
+ (unsigned long long)getResponseLengthForResponse:(id)a0 body:(id)a1;
+ (void)calculateStreamBytesFromRequest:(id)a0 response:(id)a1 body:(id)a2 upStream:(unsigned long long *)a3 downStream:(unsigned long long *)a4;

@end
