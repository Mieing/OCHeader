@class FinderJumpInfo;

@interface RecommendPersonalizedConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int recommendCategorySwitch;
@property (retain, nonatomic) FinderJumpInfo *recommendCategoryInfo;
@property (nonatomic) unsigned int questionSwitch;
@property (retain, nonatomic) FinderJumpInfo *questionInfo;

+ (void)initialize;

- (void)setQuestionInfo:(id)a0;
- (id)questionInfo;
- (void)setQuestionSwitch:(unsigned int)a0;
- (unsigned int)questionSwitch;
- (void)setRecommendCategoryInfo:(id)a0;
- (id)recommendCategoryInfo;
- (void)setRecommendCategorySwitch:(unsigned int)a0;
- (unsigned int)recommendCategorySwitch;

@end
