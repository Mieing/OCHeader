@class NSString, NSDictionary;

@interface AWEShareHotSearchDataRequestModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *requestDataUrl;
@property (copy, nonatomic) NSString *requestMethod;
@property (copy, nonatomic) NSDictionary *requestParams;

- (id)initWithUrl:(id)a0 method:(id)a1 requestParams:(id)a2;
- (void).cxx_destruct;

@end
