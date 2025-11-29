@interface FinderObjectFavInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int starFavFlag;
@property (nonatomic) unsigned int starFavCount;
@property (nonatomic) unsigned int fingerlikeFavFlag;
@property (nonatomic) unsigned int fingerlikeFavCount;

+ (void)initialize;

- (void)setFingerlikeFavCount:(unsigned int)a0;
- (unsigned int)fingerlikeFavCount;
- (void)setFingerlikeFavFlag:(unsigned int)a0;
- (unsigned int)fingerlikeFavFlag;
- (void)setStarFavCount:(unsigned int)a0;
- (unsigned int)starFavCount;
- (void)setStarFavFlag:(unsigned int)a0;
- (unsigned int)starFavFlag;

@end
