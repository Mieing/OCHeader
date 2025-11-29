@class NSString, NSMutableArray;

@interface MegaVideoClientStatus : WXPBGeneratedMessage

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

+ (void)initialize;

@end
