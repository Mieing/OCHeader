@interface EntranceExposeContent_ExposeRecord : WXPBGeneratedMessage

@property (nonatomic) unsigned int reddotStatus;
@property (nonatomic) unsigned int actionCount;
@property (nonatomic) unsigned int exposeCount;
@property (nonatomic) unsigned int stayTimeSec;

+ (void)initialize;

- (void)setStayTimeSec:(unsigned int)a0;
- (unsigned int)stayTimeSec;
- (void)setExposeCount:(unsigned int)a0;
- (unsigned int)exposeCount;
- (void)setActionCount:(unsigned int)a0;
- (unsigned int)actionCount;
- (void)setReddotStatus:(unsigned int)a0;
- (unsigned int)reddotStatus;

@end
