@class NSMutableArray;

@interface FinderAuthorInteractionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int totalLikeCount;
@property (nonatomic) unsigned int totalFavCount;
@property (retain, nonatomic) NSMutableArray *historyMilestoneInfoList;
@property (nonatomic) unsigned long long version;

+ (void)initialize;

- (void)setVersion:(unsigned long long)a0;
- (unsigned long long)version;
- (void)setHistoryMilestoneInfoList:(id)a0;
- (id)historyMilestoneInfoList;
- (void)setTotalFavCount:(unsigned int)a0;
- (unsigned int)totalFavCount;
- (void)setTotalLikeCount:(unsigned int)a0;
- (unsigned int)totalLikeCount;

@end
