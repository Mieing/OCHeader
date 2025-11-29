@class NSString;

@interface RedDotReportItem_ItemInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizuin;
@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned int itemidx;
@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *rankSessionId;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *buffer;
@property (nonatomic) unsigned int digestExposureCnt;
@property (nonatomic) unsigned int digestExposurePeriod;

+ (void)initialize;

- (void)setDigestExposurePeriod:(unsigned int)a0;
- (unsigned int)digestExposurePeriod;
- (void)setDigestExposureCnt:(unsigned int)a0;
- (unsigned int)digestExposureCnt;
- (void)setBuffer:(id)a0;
- (id)buffer;
- (void)setExtraData:(id)a0;
- (id)extraData;
- (void)setRankSessionId:(id)a0;
- (id)rankSessionId;
- (void)setVid:(id)a0;
- (id)vid;
- (void)setItemidx:(unsigned int)a0;
- (unsigned int)itemidx;
- (void)setAppmsgid:(unsigned int)a0;
- (unsigned int)appmsgid;
- (void)setBizuin:(unsigned int)a0;
- (unsigned int)bizuin;

@end
