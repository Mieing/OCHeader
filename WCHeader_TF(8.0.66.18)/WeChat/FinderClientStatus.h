@class FinderClientPerformance, NSString, FinderClientBrightness, FinderClientAudio, NSMutableArray;

@interface FinderClientStatus : WXPBGeneratedMessage

@property (nonatomic) int netType;
@property (retain, nonatomic) NSString *netName;
@property (nonatomic) unsigned int bandwidthKbps;
@property (retain, nonatomic) NSMutableArray *lastVideosDownloadInfo;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) NSMutableArray *supportedCodingFormat;
@property (retain, nonatomic) NSMutableArray *finderFluencyInfo;
@property (nonatomic) unsigned int deviceTypeId;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString *clientIp;
@property (retain, nonatomic) NSMutableArray *recentFinderDownloadSpeed;
@property (retain, nonatomic) NSMutableArray *recentWechatDownloadSpeed;
@property (retain, nonatomic) NSMutableArray *lastPreloadDownloadInfo;
@property (retain, nonatomic) NSMutableArray *recentNonfinderQuicDownloadSpeed;
@property (retain, nonatomic) NSMutableArray *recentNonfinderNonquicDownloadSpeed;
@property (retain, nonatomic) NSMutableArray *nextVideosDownloadInfo;
@property (retain, nonatomic) FinderClientPerformance *clientPerformance;
@property (nonatomic) unsigned int isDawangNettype;
@property (retain, nonatomic) FinderClientBrightness *brightness;
@property (retain, nonatomic) NSMutableArray *supportedHdrType;
@property (retain, nonatomic) NSMutableArray *recentCdnConnRecord;
@property (retain, nonatomic) NSMutableArray *recentCgiConnRecord;
@property (retain, nonatomic) FinderClientAudio *clientAudio;

+ (void)initialize;

@end
