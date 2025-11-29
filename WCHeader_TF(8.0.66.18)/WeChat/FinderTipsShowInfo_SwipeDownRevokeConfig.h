@interface FinderTipsShowInfo_SwipeDownRevokeConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned int tabType;
@property (nonatomic) unsigned int index;

+ (void)initialize;

- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (void)setTabType:(unsigned int)a0;
- (unsigned int)tabType;
- (void)setEnable:(BOOL)a0;
- (BOOL)enable;

@end
