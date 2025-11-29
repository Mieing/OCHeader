@class CDNClientConfig, CDNDnsInfo, SKBuiltinBuffer_t;

@interface CdnInfo : WXPBGeneratedMessage

@property (retain, nonatomic) CDNDnsInfo *dnsInfo;
@property (retain, nonatomic) CDNDnsInfo *snsDnsInfo;
@property (retain, nonatomic) CDNDnsInfo *appDnsInfo;
@property (retain, nonatomic) SKBuiltinBuffer_t *cdndnsRuleBuf;
@property (retain, nonatomic) SKBuiltinBuffer_t *fakeCdndnsRuleBuf;
@property (retain, nonatomic) CDNDnsInfo *fakeDnsInfo;
@property (nonatomic) int getCdnDnsIntervalMs;
@property (retain, nonatomic) CDNClientConfig *defaultConfig;
@property (retain, nonatomic) CDNClientConfig *disasterConfig;

+ (void)initialize;

@end
