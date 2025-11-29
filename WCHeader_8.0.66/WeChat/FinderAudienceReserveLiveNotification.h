@interface FinderAudienceReserveLiveNotification : WXPBGeneratedMessage

@property (nonatomic) unsigned long long anchorFinderUin;
@property (nonatomic) unsigned int isReserve;
@property (nonatomic) unsigned int version;

+ (void)initialize;

- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setIsReserve:(unsigned int)a0;
- (unsigned int)isReserve;
- (void)setAnchorFinderUin:(unsigned long long)a0;
- (unsigned long long)anchorFinderUin;

@end
