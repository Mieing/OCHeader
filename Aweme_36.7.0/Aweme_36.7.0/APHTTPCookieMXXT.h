@class NSDictionary;

@interface APHTTPCookieMXXT : NSObject

@property (retain, nonatomic) NSDictionary *properties;

+ (id)cookiesWithResponseHeaderFields:(id)a0 forURL:(id)a1;

- (id)requestHeaderField;
- (id)copy;
- (id)initWithProperties:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)value;
- (id)domain;
- (id)path;
- (BOOL)isEqual:(id)a0;
- (id)expiresDate;

@end
