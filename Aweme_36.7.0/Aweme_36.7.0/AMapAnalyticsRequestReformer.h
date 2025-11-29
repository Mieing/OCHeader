@class NSString, NSData;

@interface AMapAnalyticsRequestReformer : AMapRequestReformer

@property (copy, nonatomic) NSString *product;
@property (nonatomic) long long logtype;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSData *pData;
@property (readonly, nonatomic) NSString *signvalue;
@property (copy, nonatomic) NSString *sKey;

- (id)initWithType:(long long)a0 postData:(id)a1;
- (id)v6BaseURL;
- (id)signvalueWithData:(id)a0;
- (void).cxx_destruct;
- (id)method;
- (id)baseURL;
- (id)parameters;
- (id)postData;

@end
