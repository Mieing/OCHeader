@class NSString, FinderLiveQoSInfo, FinderLiveAbnormalInfo, FinderLiveCdnPlayInfo, NSMutableArray;

@interface FinderLiveClientStatus : WXPBGeneratedMessage

@property (nonatomic) int netType;
@property (retain, nonatomic) NSString *netName;
@property (nonatomic) unsigned int bandwidthKbps;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceBrand;
@property (retain, nonatomic) NSString *osName;
@property (retain, nonatomic) NSString *osVersion;
@property (retain, nonatomic) FinderLiveQoSInfo *currentLiveQosInfo;
@property (retain, nonatomic) NSMutableArray *lastLiveQosInfo;
@property (nonatomic) unsigned int videoDecoderSupportMask;
@property (nonatomic) unsigned int videoEncoderSupportMask;
@property (retain, nonatomic) FinderLiveCdnPlayInfo *liveCdnPlayInfo;
@property (retain, nonatomic) FinderLiveAbnormalInfo *abnormalInfo;

+ (void)initialize;

@end
