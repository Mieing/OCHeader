@class HTSLiveAddressInfo;

@interface HTSLiveLocationInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveAddressInfo *gpsInfo;
@property (nonatomic) BOOL hasGpsInfo;
@property (retain, nonatomic) HTSLiveAddressInfo *ipInfo;
@property (nonatomic) BOOL hasIpInfo;
@property (nonatomic) BOOL enablePermission;
@property (nonatomic) BOOL enableLocationMode;

+ (id)descriptor;

@end
