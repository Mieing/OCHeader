@class TTHttpResponse, NSString, NSArray, NSDictionary;

@interface AWESearchScanBoxModel : AWEBaseApiModel <CSPCommonResponse>

@property (copy, nonatomic) NSString *tosId;
@property (copy, nonatomic) NSArray *mmodList;
@property (copy, nonatomic) NSDictionary *curBoxDetection;
@property (copy, nonatomic) NSArray *boxDetectionList;
@property (copy, nonatomic) NSArray *hiddenBoxDetectionList;
@property (copy, nonatomic) NSArray *canActiveShowBoxDetectionList;
@property (copy, nonatomic) NSDictionary *visionExtra;
@property (nonatomic) long long selectIndex;
@property (nonatomic) BOOL hasReportDetectionShowTrack;
@property (retain, nonatomic) TTHttpResponse *csp_ttResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
