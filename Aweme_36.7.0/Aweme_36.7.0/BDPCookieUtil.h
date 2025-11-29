@interface BDPCookieUtil : NSObject

+ (id)hostCookiesForURL:(id)a0;
+ (id)combiningCookie:(id)a0 from:(id)a1;
+ (id)sharedCookieForURL:(id)a0;
+ (id)sandboxCookieForURL:(id)a0 uniqueID:(id)a1;
+ (id)sandboxCookieForURL:(id)a0 inCookieJar:(id)a1;
+ (id)appendCookiesAtURLString:(id)a0 cookie:(id)a1;

@end
