@class NSString;

@interface BDPoiService : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *hostURLString;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *deviceID;

+ (id)sharedService;
+ (void)initialize;

- (id)requestParamsWithRequest:(id)a0;
- (void)poiSearchWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
