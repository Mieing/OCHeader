@class NSString, NSDictionary, NSURL, NSError;

@interface AWEECWebImagePerfLogImpl : NSObject <AWEECWebImagePerfLog>

@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (copy, nonatomic) NSString *pageName;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL firstRequest;
@property (nonatomic) double bizDuration;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)perfLogWithIESECWebImagePerfLog:(id)a0;

- (void).cxx_destruct;

@end
