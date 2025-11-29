@class NSMutableArray;

@interface FinderProgressPreviewInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int imgNum;
@property (nonatomic) float interval;
@property (nonatomic) unsigned int imgRow;
@property (nonatomic) unsigned int imgColumn;
@property (nonatomic) unsigned int imgHeight;
@property (nonatomic) unsigned int imgWidth;
@property (retain, nonatomic) NSMutableArray *spriteUrls;
@property (nonatomic) float startTime;
@property (retain, nonatomic) NSMutableArray *sprites;
@property (nonatomic) unsigned int spriteHeight;
@property (nonatomic) unsigned int spriteWidth;

+ (void)initialize;

- (void)setSpriteWidth:(unsigned int)a0;
- (unsigned int)spriteWidth;
- (void)setSpriteHeight:(unsigned int)a0;
- (unsigned int)spriteHeight;
- (void)setSprites:(id)a0;
- (id)sprites;
- (void)setStartTime:(float)a0;
- (float)startTime;
- (void)setSpriteUrls:(id)a0;
- (id)spriteUrls;
- (void)setImgWidth:(unsigned int)a0;
- (unsigned int)imgWidth;
- (void)setImgHeight:(unsigned int)a0;
- (unsigned int)imgHeight;
- (void)setImgColumn:(unsigned int)a0;
- (unsigned int)imgColumn;
- (void)setImgRow:(unsigned int)a0;
- (unsigned int)imgRow;
- (void)setInterval:(float)a0;
- (float)interval;
- (void)setImgNum:(unsigned int)a0;
- (unsigned int)imgNum;
- (BOOL)isValid;

@end
