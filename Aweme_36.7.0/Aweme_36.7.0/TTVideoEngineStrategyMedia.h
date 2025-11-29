@class TTVideoEngineInfoModel, NSMutableDictionary, NSDictionary, NSString;

@interface TTVideoEngineStrategyMedia : NSObject

@property (retain, nonatomic) NSMutableDictionary *externalUrlItemDic;
@property (copy, nonatomic) NSDictionary *mediaInfo;
@property (retain, nonatomic) TTVideoEngineInfoModel *engineInfoModel;
@property (nonatomic) long long preloadPriorityLevel;
@property (nonatomic) long long CDNUrlExpiredTime;
@property (nonatomic) long long preloadSize;
@property (nonatomic) double preloadSizeFactor;
@property (copy, nonatomic) NSString *preloadSizeInfo;
@property (copy, nonatomic) NSString *preloadCustomPath;
@property (copy, nonatomic) NSString *preloadCustomPathDashVideo;
@property (copy, nonatomic) NSString *preloadCustomPathDashAudio;
@property (copy, nonatomic) NSDictionary *preloadCustomHttpHeader;
@property (nonatomic) long long preloadOffsetMilliSecond;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *subtag;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *mContext;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadEndWithInfo;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;
@property (copy, nonatomic) id /* block */ preloadProgressForOriginPreload;
@property (copy, nonatomic) id /* block */ preloadSelectBitrate;

- (id)initWithVideoModel:(id)a0;
- (id)toVodStrategyDictionary;
- (id)initWithVideoModelInfo:(id)a0;
- (id)initWithVideoModelString:(id)a0;
- (void)appendExternalResource:(id)a0 withType:(long long)a1;
- (id)toVodStrategyJson;
- (void).cxx_destruct;
- (id)initWithMediaInfo:(id)a0;

@end
