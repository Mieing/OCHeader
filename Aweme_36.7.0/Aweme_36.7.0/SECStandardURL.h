@class NSString, NSDictionary;
@protocol SECURLFormatProtocol;

@interface SECStandardURL : NSObject

@property (copy, nonatomic) NSString *originURL;
@property (retain, nonatomic) id<SECURLFormatProtocol> formatTask;
@property (copy, nonatomic) NSString *URLIdentifier;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSString *hostAndPathIdentifier;
@property (copy, nonatomic) NSString *normalizedURL;
@property (copy, nonatomic) NSString *normalizedHostAndPath;

+ (id)normalizeQuery:(id)a0;

- (id)initWithURL:(id)a0 withFormatter:(id)a1;
- (id)initWithOriginURL:(id)a0;
- (id)initWithRouterURL:(id)a0;
- (void)standarize;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end
