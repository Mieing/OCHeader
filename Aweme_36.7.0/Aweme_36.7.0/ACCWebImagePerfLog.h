@class NSString, NSDictionary, NSURL, NSError;

@interface ACCWebImagePerfLog : NSObject

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL firstRequest;
@property (nonatomic) double bizDuration;
@property (nonatomic) double originBizDuration;
@property (nonatomic) double sdkDuration;
@property (nonatomic) double decodeDuration;
@property (nonatomic) double queueDuration;
@property (nonatomic) double cacheSeekDuration;
@property (nonatomic) double localProcessDuration;
@property (nonatomic) double downloadDuration;
@property (nonatomic) long long hitCDNCache;
@property (nonatomic) long long isSocketReused;
@property (nonatomic) double DNSDuration;
@property (nonatomic) double connectDuration;
@property (nonatomic) double sslDuration;
@property (nonatomic) double sendDuration;
@property (nonatomic) double waitDuration;
@property (nonatomic) double receiveDuration;
@property (nonatomic) long long netQuality;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) double fileSize;
@property (nonatomic) long long imageFrom;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSString *requestLog;
@property (copy, nonatomic) NSDictionary *abTestParams;
@property (readonly, nonatomic) BOOL fromCache;
@property (nonatomic) unsigned long long largeImageType;

+ (double)largeImageMemoryLimit;
+ (id)imagePerfLogWithBDImageRecoder:(id)a0 from:(long long)a1 error:(id)a2;

- (id)getBizTagWithURL:(id)a0;
- (id)initWithRequestURL:(id)a0 error:(id)a1;
- (id)getUrlQueryItem:(id)a0 url:(id)a1;
- (id)getSceneTagWithURL:(id)a0;
- (BOOL)imageTrackRatio;
- (id)imageMonitorMetricLog;
- (id)imageMonitorCategoryLog;
- (id)largeImageExceptionParams;
- (id)largeImageExceptionFilters;
- (BOOL)shouldReportPerfLog;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
