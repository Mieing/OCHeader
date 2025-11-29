@class NSString;

@interface KvReportAction24123 : NSObject

@property (retain, nonatomic) NSString *opType;
@property (retain, nonatomic) NSString *preloadSource;
@property (nonatomic) int tabType;
@property (nonatomic) int pullType;
@property (retain, nonatomic) NSString *entranceRedDotObjectId;
@property (nonatomic) unsigned int entranceRedDotScene;
@property (nonatomic) int entranceRedDotPreloadFlag;
@property (retain, nonatomic) NSString *serverConfig;
@property (nonatomic) unsigned int refreshPrefetchStatus;
@property (retain, nonatomic) NSString *clearCacheSource;
@property (nonatomic) unsigned int innerVersion;

+ (id)action;

- (void)perform;
- (void).cxx_destruct;

@end
