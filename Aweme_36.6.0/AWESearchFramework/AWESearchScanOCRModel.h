@class NSString, NSArray, TTHttpResponse;

@interface AWESearchScanOCRModel : AWEBaseApiModel <CSPCommonResponse>

@property (copy, nonatomic) NSString *tosId;
@property (copy, nonatomic) NSArray *ocrInfoList;
@property (retain, nonatomic) TTHttpResponse *csp_ttResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
