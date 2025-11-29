@interface FinderPopupClientFreqConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int exposeQuota;
@property (nonatomic) unsigned int exposeInterval;

+ (void)initialize;

- (void)setExposeInterval:(unsigned int)a0;
- (unsigned int)exposeInterval;
- (void)setExposeQuota:(unsigned int)a0;
- (unsigned int)exposeQuota;

@end
