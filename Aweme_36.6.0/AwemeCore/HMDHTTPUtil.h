@interface HMDHTTPUtil : NSObject

+ (unsigned long long)getRequestLengthForRequest:(id)a0 streamLength:(long long)a1;
+ (unsigned long long)getResponseLengthForResponse:(id)a0 bodyLength:(unsigned long long)a1;
+ (id)getCookiesForRequest:(id)a0;
+ (unsigned long long)getHeadersLength:(id)a0;

@end
