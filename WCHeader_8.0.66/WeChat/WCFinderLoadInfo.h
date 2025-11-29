@class NSString;

@interface WCFinderLoadInfo : NSObject

@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long downloadType;
@property (nonatomic) unsigned long long downloadStrategy;
@property (nonatomic) int commentScene;
@property (nonatomic) unsigned long long netType;
@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long durationInS;
@property (nonatomic) unsigned long long durationInMS;
@property (nonatomic) unsigned long long fileSize;
@property (copy, nonatomic) NSString *videoFormat;
@property (copy, nonatomic) NSString *bypass;
@property (nonatomic) unsigned long long downloadSize;
@property (nonatomic) unsigned long long completeDownloadSize;
@property (nonatomic) unsigned long long downloadStartTime;
@property (nonatomic) unsigned long long downloadEndTime;
@property (nonatomic) BOOL isDiscoveryPreload;
@property (nonatomic) unsigned long long uniqPlayTime;
@property (nonatomic) unsigned long long realPlayTime;
@property (nonatomic) unsigned long long stayTime;
@property (nonatomic) unsigned long long playCount;
@property (nonatomic) unsigned long long playStartTime;
@property (nonatomic) unsigned long long playEndTime;
@property (nonatomic) unsigned long long playStartPos;
@property (nonatomic) unsigned long long playEndPos;

- (id)description;
- (void)fillWithMediaWrap:(id)a0;
- (void).cxx_destruct;

@end
