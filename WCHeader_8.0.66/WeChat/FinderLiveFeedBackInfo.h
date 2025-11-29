@interface FinderLiveFeedBackInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL hasSatisfactionQuest;
@property (nonatomic) unsigned int satisfactionQuestAppearTimeMs;

+ (void)initialize;

- (void)setSatisfactionQuestAppearTimeMs:(unsigned int)a0;
- (unsigned int)satisfactionQuestAppearTimeMs;
- (void)setHasSatisfactionQuest:(BOOL)a0;
- (BOOL)hasSatisfactionQuest;

@end
