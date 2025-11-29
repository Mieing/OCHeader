@class NSMutableArray;
@protocol NSLocking;

@interface APHTTPCookieStorageMXXTIY : NSObject

@property (retain, nonatomic) NSMutableArray *cookies;
@property (retain, nonatomic) id<NSLocking> locker;

+ (id)sharedHTTPCookieStorage;

- (long long)indexOfCookie:(id)a0;
- (id)httpCookieHeaderStrForUrl:(id)a0;
- (void)tryToAddCookie:(id)a0 ToArray:(id)a1;
- (void)unlock;
- (void).cxx_destruct;
- (void)lock;
- (id)init;
- (void)setCookie:(id)a0;
- (void)setCookies:(id)a0 forURL:(id)a1 mainDocumentURL:(id)a2;
- (id)cookiesForURL:(id)a0;
- (void)deleteCookie:(id)a0;
- (void)deleteAllCookies;

@end
