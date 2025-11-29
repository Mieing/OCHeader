@class NSString, NSNumber;

@interface AWERVDPerformanceMonitor : NSObject

@property (nonatomic) double totalLoadTime;
@property (nonatomic) double netDuration;
@property (nonatomic) double loadBeginTime;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiBeginDuration;
@property (nonatomic) double uiDuration;
@property (nonatomic) double netBeginTime;
@property (nonatomic) double netBeginDuration;
@property (nonatomic) double netAwemeBeginTime;
@property (nonatomic) double netAwemeDuration;
@property (nonatomic) double netFeedBeginTime;
@property (nonatomic) double netFeedDuration;
@property (nonatomic) double playBeginTime;
@property (nonatomic) double playBeginDuration;
@property (nonatomic) double playDuration;
@property (nonatomic) double renderBeginTime;
@property (nonatomic) double renderBeginDuration;
@property (nonatomic) double renderTextDuration;
@property (nonatomic) double renderImgDuration;
@property (nonatomic) unsigned long long loadResult;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *ancestorEnterMethod;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *feedCount;
@property (copy, nonatomic) NSString *modelID;
@property (nonatomic) BOOL isFeedCache;
@property (nonatomic) BOOL isAwemeCache;
@property (copy, nonatomic) NSString *enterScene;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL isLongVideo;

- (void)trackPageMonitor;
- (BOOL)isAwemeAndFeedLoaded;
- (void).cxx_destruct;
- (void)resetData;

@end
