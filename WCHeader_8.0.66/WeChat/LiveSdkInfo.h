@class NSString, NSData;

@interface LiveSdkInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int sdkAppid;
@property (retain, nonatomic) NSString *sdkUserId;
@property (nonatomic) unsigned int sdkLiveId;
@property (nonatomic) unsigned int sdkRoleId;
@property (retain, nonatomic) NSData *sdkUserSig;
@property (retain, nonatomic) NSData *sdkPrivateMapKey;
@property (retain, nonatomic) NSData *sdkParams;
@property (retain, nonatomic) NSString *sdkCreateUserId;
@property (nonatomic) unsigned long long expireForSig;
@property (nonatomic) unsigned long long expireForPmk;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *liveCdnUrl;

+ (void)initialize;

- (void)setLiveCdnUrl:(id)a0;
- (id)liveCdnUrl;
- (void)setLiveId:(unsigned long long)a0;
- (unsigned long long)liveId;
- (void)setExpireForPmk:(unsigned long long)a0;
- (unsigned long long)expireForPmk;
- (void)setExpireForSig:(unsigned long long)a0;
- (unsigned long long)expireForSig;
- (void)setSdkCreateUserId:(id)a0;
- (id)sdkCreateUserId;
- (void)setSdkParams:(id)a0;
- (id)sdkParams;
- (void)setSdkPrivateMapKey:(id)a0;
- (id)sdkPrivateMapKey;
- (void)setSdkUserSig:(id)a0;
- (id)sdkUserSig;
- (void)setSdkRoleId:(unsigned int)a0;
- (unsigned int)sdkRoleId;
- (void)setSdkLiveId:(unsigned int)a0;
- (unsigned int)sdkLiveId;
- (void)setSdkUserId:(id)a0;
- (id)sdkUserId;
- (void)setSdkAppid:(unsigned int)a0;
- (unsigned int)sdkAppid;

@end
