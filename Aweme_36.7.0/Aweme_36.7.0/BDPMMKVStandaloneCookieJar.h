@class NSString, BDPMMKVStorage;

@interface BDPMMKVStandaloneCookieJar : NSObject <BDPCookieStorageInterface>

@property (copy, nonatomic) NSString *storagePath;
@property (retain, nonatomic) BDPMMKVStorage *cookieStorage;
@property (retain, nonatomic) BDPMMKVStorage *cookieCountStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cleanSessionCookies;
- (id)convertToCookieDictonary:(id)a0;
- (void)pruneCookie:(id)a0;
- (id)convertToCookiePart:(id)a0;
- (BOOL)isSecureCookie:(id)a0 ForURL:(id)a1;
- (BOOL)isExpires:(id)a0;
- (id)allCookieDomains;
- (void)close;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (int)setCookie:(id)a0;
- (id)cookies:(id)a0;
- (id)allCookies;

@end
