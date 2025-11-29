@class NSString;

@interface AudioFeedsInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int entrySwitch;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *h5Url;

+ (void)initialize;

- (void)setH5Url:(id)a0;
- (id)h5Url;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;
- (void)setQuery:(id)a0;
- (id)query;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppid:(id)a0;
- (id)appid;
- (void)setEntrySwitch:(unsigned int)a0;
- (unsigned int)entrySwitch;

@end
