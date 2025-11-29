@class BaseResponse, WxUserIdcInfo, CDNDnsInfo, CDNClientConfig, SKBuiltinBuffer_t;

@interface GetCDNDnsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) CDNDnsInfo *dnsInfo;
@property (retain, nonatomic) CDNDnsInfo *snsDnsInfo;
@property (retain, nonatomic) CDNDnsInfo *appDnsInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *cdndnsRuleBuf;
@property (retain, nonatomic) SKBuiltinBuffer_t *fakeCdndnsRuleBuf;
@property (retain, nonatomic) CDNDnsInfo *fakeDnsInfo;
@property (nonatomic) int getCdnDnsIntervalMs;
@property (retain, nonatomic) CDNClientConfig *defaultConfig;
@property (retain, nonatomic) CDNClientConfig *disasterConfig;
@property (nonatomic) int nextIpv6;
@property (retain, nonatomic) CDNDnsInfo *c2CRoamDnsInfo;
@property (retain, nonatomic) WxUserIdcInfo *cdnUserIdcInfo;
@property (nonatomic) int vcodec1Limit;

+ (void)initialize;

- (void)setVcodec1Limit:(int)a0;
- (int)vcodec1Limit;
- (void)setCdnUserIdcInfo:(id)a0;
- (id)cdnUserIdcInfo;
- (void)setC2CRoamDnsInfo:(id)a0;
- (id)c2CRoamDnsInfo;
- (void)setNextIpv6:(int)a0;
- (int)nextIpv6;
- (void)setDisasterConfig:(id)a0;
- (id)disasterConfig;
- (void)setDefaultConfig:(id)a0;
- (id)defaultConfig;
- (void)setGetCdnDnsIntervalMs:(int)a0;
- (int)getCdnDnsIntervalMs;
- (void)setFakeDnsInfo:(id)a0;
- (id)fakeDnsInfo;
- (void)setFakeCdndnsRuleBuf:(id)a0;
- (id)fakeCdndnsRuleBuf;
- (void)setCdndnsRuleBuf:(id)a0;
- (id)cdndnsRuleBuf;
- (void)setAppDnsInfo:(id)a0;
- (id)appDnsInfo;
- (void)setSnsDnsInfo:(id)a0;
- (id)snsDnsInfo;
- (void)setDnsInfo:(id)a0;
- (id)dnsInfo;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
