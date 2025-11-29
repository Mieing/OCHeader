@class NSString, NSDictionary, NSMutableDictionary;

@interface PuzzleWebRLPerformanceTrackData : NSObject

@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *pagePath;
@property (copy, nonatomic) NSString *pageDomain;
@property (copy, nonatomic) NSDictionary *mainFramePerfInfo;
@property (nonatomic) long long loadResqustStart;
@property (nonatomic) long long navigationFinish;
@property (retain, nonatomic) NSMutableDictionary *resourcesPerfInfo;
@property (copy, nonatomic) NSString *containerUUID;
@property (copy, nonatomic) NSString *resLoaderResolution;

- (id)commonRLInfoFromPerfDic:(id)a0;
- (id)orderedSubResourceURLs;
- (void)recordPageLoadStartTime:(long long)a0;
- (void)recordPageNavigationFinishTime:(long long)a0;
- (void)addWebMainResPerf:(id)a0;
- (void)addWebSubResPerfFromDic:(id)a0;
- (id)formatPageResPerfDictionary;
- (void).cxx_destruct;
- (id)init;

@end
