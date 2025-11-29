@class NSString, NSHTTPCookie, NSDate;

@interface BDPCookiePart : NSObject

@property (copy) NSString *name;
@property (copy) NSString *value;
@property (copy) NSString *path;
@property (copy) NSString *domain;
@property (retain) NSHTTPCookie *inner;
@property (retain) NSDate *expires;
@property long long maxAge;
@property BOOL secure;
@property BOOL httpOnly;
@property BOOL sessionOnly;

+ (id)cookieWithResponse:(id)a0;

- (BOOL)isCrossDomain:(id)a0;
- (void)readInnerProperties;
- (id)initWithNSCookie:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
