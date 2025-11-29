@class NSString, NSNumber;

@interface AWERVNewDetailPerformanceMonitor : NSObject

@property (nonatomic) double totalLoadTime;
@property (nonatomic) double netDuration;
@property (nonatomic) double loadBeginTime;
@property (nonatomic) double uiBeginTime;
@property (nonatomic) double uiBeginDuration;
@property (nonatomic) double uiDuration;
@property (nonatomic) double netBeginTime;
@property (nonatomic) double netBeginDuration;
@property (nonatomic) double netFeedBeginTime;
@property (nonatomic) double netFeedDuration;
@property (nonatomic) unsigned long long loadResult;
@property (copy, nonatomic) NSString *provider;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *ancestorEnterMethod;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) NSNumber *feedCount;
@property (copy, nonatomic) NSString *modelID;
@property (nonatomic) BOOL isFeedCache;
@property (copy, nonatomic) NSString *enterScene;
@property (nonatomic) BOOL hasReported;

- (void)trackPageMonitor;
- (void).cxx_destruct;
- (void)resetData;

@end
