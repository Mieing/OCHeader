@protocol AWEVideoDownloadDelegate, AWEVideoCDNRequestDelegate, AWEVideoPlayerLoggerDelegate;

@interface AWEVideoDiskCacheConfiguration : NSObject

@property (nonatomic) unsigned long long costLimit;
@property (nonatomic) unsigned long long autoTrimInterval;
@property (nonatomic) BOOL fileLogEnabled;
@property (copy, nonatomic) id /* block */ URLStringToCacheKey;
@property (copy, nonatomic) id /* block */ Reporter;
@property (weak, nonatomic) id<AWEVideoCDNRequestDelegate> CDNTrackDelegate;
@property (weak, nonatomic) id<AWEVideoDownloadDelegate> videoDownloadDelegate;
@property (retain, nonatomic) Class networkUtilityClass;
@property (weak, nonatomic) id<AWEVideoPlayerLoggerDelegate> loggerDelegate;
@property (nonatomic) unsigned long long disableAutoTrimFileLifeTime;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
