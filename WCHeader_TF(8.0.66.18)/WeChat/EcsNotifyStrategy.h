@interface EcsNotifyStrategy : WXPBGeneratedMessage

@property (nonatomic) unsigned int abstractType;
@property (nonatomic) unsigned int displayType;
@property (nonatomic) unsigned int displayCount;
@property (nonatomic) unsigned int notifyKeepTime;
@property (nonatomic) BOOL allowNotifyKeep;
@property (nonatomic) BOOL allowNotifyUnpin;
@property (nonatomic) unsigned int notifyUnpinTime;

+ (void)initialize;

- (void)setNotifyUnpinTime:(unsigned int)a0;
- (unsigned int)notifyUnpinTime;
- (void)setAllowNotifyUnpin:(BOOL)a0;
- (BOOL)allowNotifyUnpin;
- (void)setAllowNotifyKeep:(BOOL)a0;
- (BOOL)allowNotifyKeep;
- (void)setNotifyKeepTime:(unsigned int)a0;
- (unsigned int)notifyKeepTime;
- (void)setDisplayCount:(unsigned int)a0;
- (unsigned int)displayCount;
- (void)setDisplayType:(unsigned int)a0;
- (unsigned int)displayType;
- (void)setAbstractType:(unsigned int)a0;
- (unsigned int)abstractType;

@end
