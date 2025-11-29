@class NSString;

@interface FinderJumpWebAppStoreParams_FinderJumpSKAdItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *adNetworkId;
@property (nonatomic) int campaignId;
@property (retain, nonatomic) NSString *itunesItemId;
@property (retain, nonatomic) NSString *nonce;
@property (retain, nonatomic) NSString *sourceAppId;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

@end
