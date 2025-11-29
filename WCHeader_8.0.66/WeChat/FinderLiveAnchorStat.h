@interface FinderLiveAnchorStat : WXPBGeneratedMessage

@property (nonatomic) unsigned int totalLiveCount;
@property (nonatomic) unsigned long long totalAudienceCount;
@property (nonatomic) unsigned int recentLiveCount;

+ (void)initialize;

- (void)setRecentLiveCount:(unsigned int)a0;
- (unsigned int)recentLiveCount;
- (void)setTotalAudienceCount:(unsigned long long)a0;
- (unsigned long long)totalAudienceCount;
- (void)setTotalLiveCount:(unsigned int)a0;
- (unsigned int)totalLiveCount;

@end
