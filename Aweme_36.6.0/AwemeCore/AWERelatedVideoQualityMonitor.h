@class AWERelatedVideoContentQualityModel, NSString, AWERelatedVideoTraceQualityModel, AWERelatedVideoTagModel, AWEAwemeModel, AWERVDetailPageContext, NSMutableArray;

@interface AWERelatedVideoQualityMonitor : NSObject

@property (retain, nonatomic) NSMutableArray *videos;
@property (retain, nonatomic) NSMutableArray *filterVideos;
@property (retain, nonatomic) AWERelatedVideoTagModel *entranceTag;
@property (nonatomic) BOOL isTagValid;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (copy, nonatomic) NSString *ancestorEnterMethod;
@property (copy, nonatomic) NSString *requestId;
@property (retain, nonatomic) AWEAwemeModel *entranceAwemeModel;
@property (copy, nonatomic) NSString *videoInfos;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) double startTime;
@property (retain, nonatomic) AWERelatedVideoContentQualityModel *content;
@property (retain, nonatomic) AWERelatedVideoTraceQualityModel *trace;

- (void)appendResponseModel:(id)a0;
- (void)monitorTraceQuality:(id)a0;
- (BOOL)canReported:(id)a0;
- (void)handleUnCorrelated;
- (BOOL)enableQualityMonitor;
- (BOOL)videoIsViewedWithVideoInfo:(id)a0;
- (void)handleVideoInfos;
- (void)handleCorrelated:(id)a0;
- (void)monitorContentQuality:(id)a0;
- (void).cxx_destruct;

@end
