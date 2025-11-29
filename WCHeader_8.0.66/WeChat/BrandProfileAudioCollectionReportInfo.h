@class NSString, NSDictionary;

@interface BrandProfileAudioCollectionReportInfo : NSObject

@property (nonatomic) unsigned long long proto;
@property (copy, nonatomic) NSString *viewId;
@property (copy, nonatomic) id /* block */ viewReportParamsBlock;
@property (nonatomic) long long pageId;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSDictionary *pageReportParams;

- (struct SDKReportInfo { id x0; id /* block */ x1; int x2; long long x3; struct SDKPageReportInfo { long long x0; id x1; id x2; } x4; })toSDKReportInfo;
- (void).cxx_destruct;

@end
