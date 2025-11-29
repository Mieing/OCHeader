@class NSString;

@interface WxaSyncBaseCmd : WXPBGeneratedMessage

@property (nonatomic) unsigned int dealEndTime;
@property (nonatomic) unsigned int cmdSequnce;
@property (nonatomic) unsigned int reportIdKey;
@property (nonatomic) unsigned int reportKeyOffset;
@property (retain, nonatomic) NSString *cmdKey;

+ (void)initialize;

- (void)setCmdKey:(id)a0;
- (id)cmdKey;
- (void)setReportKeyOffset:(unsigned int)a0;
- (unsigned int)reportKeyOffset;
- (void)setReportIdKey:(unsigned int)a0;
- (unsigned int)reportIdKey;
- (void)setCmdSequnce:(unsigned int)a0;
- (unsigned int)cmdSequnce;
- (void)setDealEndTime:(unsigned int)a0;
- (unsigned int)dealEndTime;

@end
