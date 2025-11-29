@interface FinderOriginalInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int restRepostCount;
@property (nonatomic) unsigned int restApplyOriginalCount;
@property (nonatomic) unsigned int restPunishDay;
@property (nonatomic) unsigned int punishYearFlag;
@property (nonatomic) unsigned int postNeedCheckFlag;

+ (void)initialize;

- (void)setPostNeedCheckFlag:(unsigned int)a0;
- (unsigned int)postNeedCheckFlag;
- (void)setPunishYearFlag:(unsigned int)a0;
- (unsigned int)punishYearFlag;
- (void)setRestPunishDay:(unsigned int)a0;
- (unsigned int)restPunishDay;
- (void)setRestApplyOriginalCount:(unsigned int)a0;
- (unsigned int)restApplyOriginalCount;
- (void)setRestRepostCount:(unsigned int)a0;
- (unsigned int)restRepostCount;

@end
