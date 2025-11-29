@interface FinderObjectComboLikeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int comboLikeCount;
@property (nonatomic) unsigned int comboFavCount;

+ (void)initialize;

- (void)setComboFavCount:(unsigned int)a0;
- (unsigned int)comboFavCount;
- (void)setComboLikeCount:(unsigned int)a0;
- (unsigned int)comboLikeCount;

@end
