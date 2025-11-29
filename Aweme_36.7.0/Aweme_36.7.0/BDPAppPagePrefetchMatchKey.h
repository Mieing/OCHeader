@class NSArray, NSString, NSDictionary;

@interface BDPAppPagePrefetchMatchKey : NSObject <NSCopying>

@property (nonatomic) BOOL newVersion;
@property (copy, nonatomic) NSArray *requireQueryKeys;
@property (copy, nonatomic) NSArray *requireHeaderKeys;
@property (copy, nonatomic) NSArray *requireDataKeys;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *header;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *responseType;
@property (nonatomic) BOOL appendHostCookie;
@property (nonatomic) BOOL useTTNetWithHostParams;
@property (retain, nonatomic) NSArray *queryFuzzyMatchKeys;
@property (retain, nonatomic) NSArray *headerFuzzyMatchKeys;
@property (nonatomic) double errorRange;
@property (nonatomic) BOOL used;

- (id)initWithParam:(id)a0;
- (long long)isEqualToMatchKey:(id)a0;
- (id)getDataFromType:(long long)a0;
- (BOOL)isUrlEqual:(id)a0;
- (BOOL)isHeaderEqual:(id)a0;
- (BOOL)isDataEqual:(id)a0;
- (BOOL)isDict:(id)a0 equalToOtherDict:(id)a1 withRequireKeys:(id)a2 fuzzyMatchKeys:(id)a3;
- (id)removeReferFromDict:(id)a0;
- (BOOL)compareDoubleValue:(double)a0 toValue:(double)a1 errorRange:(double)a2;
- (BOOL)isCookieKey:(id)a0;
- (BOOL)compareCookies:(id)a0 with:(id)a1;
- (id)cookieWithString:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUrl:(id)a0;

@end
