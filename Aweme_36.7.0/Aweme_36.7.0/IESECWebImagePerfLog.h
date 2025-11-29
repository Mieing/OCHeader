@class NSString, NSDictionary, NSURL, NSError, NSNumber;

@interface IESECWebImagePerfLog : NSObject

@property (readonly, nonatomic) BOOL cancel;
@property (readonly, nonatomic) BOOL fromCache;
@property (readonly, nonatomic) BOOL isBizError;
@property (readonly, nonatomic) BOOL isTransformed;
@property (readonly, nonatomic) NSString *imageType;
@property (readonly, nonatomic) long long imageCount;
@property (readonly, nonatomic) NSNumber *exceptionTag;
@property (readonly, nonatomic) NSString *failPhase;
@property (nonatomic) unsigned long long largeImageType;
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
@property (nonatomic) double firstScreenImageRenderDuration;
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
@property (nonatomic) long long ecFromCache;
@property (copy, nonatomic) NSDictionary *logParams;
@property (copy, nonatomic) NSString *requestLog;
@property (copy, nonatomic) NSDictionary *abTestParams;

+ (double)largeImageMemoryLimit;
+ (id)imagePerfLogWithBDImageRecoder:(id)a0 from:(long long)a1 error:(id)a2;
+ (double)ecomImageMonitorCacheSampleRate;
+ (BOOL)imageMonitorCopyExtraToCategory;

- (id)serverIp;
- (id)initWithRequestURL:(id)a0 error:(id)a1;
- (id)imageMonitorMetricLog;
- (id)imageMonitorCategoryLog;
- (id)largeImageExceptionParams;
- (id)largeImageExceptionFilters;
- (BOOL)shouldReportPerfLog;
- (id)imageSDKVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
