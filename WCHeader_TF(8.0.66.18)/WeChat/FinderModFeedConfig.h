@interface FinderModFeedConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int descriptionMaxDiffCnt;
@property (nonatomic) unsigned int coverUrlWordMaxDiffCnt;

+ (void)initialize;

- (void)setCoverUrlWordMaxDiffCnt:(unsigned int)a0;
- (unsigned int)coverUrlWordMaxDiffCnt;
- (void)setDescriptionMaxDiffCnt:(unsigned int)a0;
- (unsigned int)descriptionMaxDiffCnt;

@end
