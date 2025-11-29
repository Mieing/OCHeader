@class NSDictionary, TTHttpResponse, NSString;

@interface AWESearchScanResponseModel : AWEBaseApiModel <CSPCommonResponse>

@property (copy, nonatomic) NSDictionary *resultsDic;
@property (retain, nonatomic) TTHttpResponse *csp_ttResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
