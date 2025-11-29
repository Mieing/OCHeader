@class NSString, NSDictionary;

@interface AWEPayNFCSession : NSObject

@property (copy, nonatomic) NSString *originURL;
@property (copy, nonatomic) NSString *originDeeplinkURL;
@property (copy, nonatomic) NSDictionary *originURLParams;
@property (nonatomic) BOOL isColdLaunch;
@property (nonatomic) double launchStartTime;
@property (nonatomic) double sessionStartTime;
@property (nonatomic) double sessionFinishTime;
@property (nonatomic) BOOL sessionFinished;
@property (nonatomic) BOOL isInnerNFCScan;
@property (copy, nonatomic) NSString *routeTargetURL;
@property (readonly, copy, nonatomic) NSString *bid;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *tid;
@property (readonly, copy, nonatomic) NSString *ext;
@property (retain, nonatomic) NSDictionary *extDict;
@property (readonly, copy, nonatomic) NSString *industryCode;
@property (readonly, copy, nonatomic) NSString *bizKey;
@property (nonatomic) BOOL isRetry;
@property (copy, nonatomic) NSString *retryScene;
@property (readonly, nonatomic) double startTime;
@property (nonatomic) double redirectReqStartTime;
@property (nonatomic) double redirectReqEndTime;
@property (nonatomic) double redirectCacheLoadStartTime;
@property (nonatomic) double redirectCacheLoadEndTime;
@property (copy, nonatomic) NSString *rdtCacheType;
@property (nonatomic) double transferStartTime;
@property (nonatomic) double transferEndTime;
@property (copy, nonatomic) NSString *preloadStatus;
@property (copy, nonatomic) NSString *rdtTargetScheme;

- (id)commonTrackParams;
- (id)contextParams;
- (void)trackSessionStart;
- (void)finishWithCode:(id)a0 msg:(id)a1;
- (void)trackSessionFinishWithCode:(id)a0 msg:(id)a1;
- (id)commonSessionParams;
- (long long)timestampMSFrom:(double)a0;
- (id)initWithURL:(id)a0 originDeeplinkURL:(id)a1 isColdLaunch:(BOOL)a2 isInnerNFCScan:(BOOL)a3;
- (id)generateTimorTimelineData;
- (BOOL)isRedirectInCacheMode;
- (void).cxx_destruct;
- (void)dealloc;

@end
