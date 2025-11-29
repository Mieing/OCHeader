@class NSString, NSNumber;

@interface IESGCPGetXPlayDownloadInfoDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *tags;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *startPage;
@property (copy, nonatomic) NSString *downloadExtra;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromHost;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (nonatomic) BOOL forbidRequestDownloadInfo;
@property (nonatomic) BOOL forbidDeassignEnterFrom;
@property (copy, nonatomic) NSString *enterFromMerge;
@property (copy, nonatomic) NSString *adRefer;
@property (copy, nonatomic) NSString *productDescUrl;
@property (copy, nonatomic) NSString *privacyUrl;
@property (copy, nonatomic) NSString *packagePermissionUrl;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSNumber *gameStageType;
@property (copy, nonatomic) NSString *publisher;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
