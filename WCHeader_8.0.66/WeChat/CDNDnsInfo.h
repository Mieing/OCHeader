@class NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface CDNDnsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int ver;
@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int expireTime;
@property (nonatomic) int frontId;
@property (nonatomic) int frontIpcount;
@property (retain, nonatomic) NSMutableArray *frontIplist;
@property (retain, nonatomic) NSString *zoneDomain;
@property (retain, nonatomic) SKBuiltinBuffer_t *authKey;
@property (nonatomic) int zoneId;
@property (nonatomic) int zoneIpcount;
@property (retain, nonatomic) NSMutableArray *zoneIplist;
@property (retain, nonatomic) NSMutableArray *frontIpportList;
@property (retain, nonatomic) NSMutableArray *zoneIpportList;
@property (nonatomic) int frontIpportCount;
@property (nonatomic) int zoneIpportCount;
@property (nonatomic) unsigned int fakeUin;
@property (retain, nonatomic) SKBuiltinBuffer_t *newAuthKey;

+ (void)initialize;

- (void)setNewAuthKey:(id)a0;
- (id)newAuthKey;
- (void)setFakeUin:(unsigned int)a0;
- (unsigned int)fakeUin;
- (void)setZoneIpportCount:(int)a0;
- (int)zoneIpportCount;
- (void)setFrontIpportCount:(int)a0;
- (int)frontIpportCount;
- (void)setZoneIpportList:(id)a0;
- (id)zoneIpportList;
- (void)setFrontIpportList:(id)a0;
- (id)frontIpportList;
- (void)setZoneIplist:(id)a0;
- (id)zoneIplist;
- (void)setZoneIpcount:(int)a0;
- (int)zoneIpcount;
- (void)setZoneId:(int)a0;
- (int)zoneId;
- (void)setAuthKey:(id)a0;
- (id)authKey;
- (void)setZoneDomain:(id)a0;
- (id)zoneDomain;
- (void)setFrontIplist:(id)a0;
- (id)frontIplist;
- (void)setFrontIpcount:(int)a0;
- (int)frontIpcount;
- (void)setFrontId:(int)a0;
- (int)frontId;
- (void)setExpireTime:(unsigned int)a0;
- (unsigned int)expireTime;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;
- (void)setVer:(unsigned int)a0;
- (unsigned int)ver;

@end
