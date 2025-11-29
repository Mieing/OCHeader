@class NSString, NSData, NSDictionary;

@interface PIANetworkRequestParam : NSObject

@property (copy, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSData *requestBody;
@property (copy, nonatomic) NSDictionary *requestQuery;
@property (copy, nonatomic) NSDictionary *allHTTPHeaderFields;
@property (nonatomic) unsigned long long tagType;
@property (nonatomic) long long responseType;
@property (nonatomic) long long engineType;
@property (nonatomic) long long methodType;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) BOOL enableHTTPCache;
@property (nonatomic) BOOL enableAutoResume;
@property (nonatomic) BOOL enableCommonParams;

- (id)generateNSURLRequest:(id *)a0;
- (void).cxx_destruct;
- (id)init;

@end
