@interface FinderContinuePlayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int continueFeedType;
@property (nonatomic) BOOL refreshRelatedRecommentList;

+ (void)initialize;

- (void)setRefreshRelatedRecommentList:(BOOL)a0;
- (BOOL)refreshRelatedRecommentList;
- (void)setContinueFeedType:(unsigned int)a0;
- (unsigned int)continueFeedType;

@end
